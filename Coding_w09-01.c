#include <stdio.h>

int main() {
int start, stop;
int valid_input = 0; // ตัวแปรตรวจสอบว่าข้อมูลถูกต้องหรือไม่

// รับค่าจนกว่าผู้ใช้จะป้อนข้อมูลที่ถูกต้อง
while (!valid_input) {
// 1. รับค่า start number และ stop number จากแป้นพิมพ์
printf("Enter start number: ");
scanf("%d", &start);
printf("Enter stop number: ");
scanf("%d", &stop);

// 2. ตรวจสอบเงื่อนไข
if (start < stop) {
valid_input = 1; // ข้อมูลถูกต้อง ออกจากลูป
}
else if (start == stop) {
// 2.1 แจ้งเตือนเมื่อ start เท่ากับ stop
printf("Your Start number is equal to Stop number, please try again!\n\n");
}
else {
// 3.1 แจ้งเตือนเมื่อ start มากกว่า stop
printf("Your Start number is greater than Stop number, please try again!\n\n");
}
}

// 4. แสดงข้อความ "Start number is... and stop number is..."
printf("Start number is %d and stop number is %d ---\n", start, stop);

// 5. แสดงลำดับตัวเลขจากค่าเริ่มต้น เพิ่มทีละ 1 ไปถึงค่าสุดท้าย
printf("Sequence from start to stop: ");
for (int i = start; i <= stop; i++) {
printf("%d ", i);
}
printf("\n");

// 6. แสดงข้อความ "Thank you."
printf("Thank you.\n");

return 0;
}
/*
1. โปรแกรมใช้ลูป while เพื่อรับค่าจนกว่าผู้ใช้จะป้อนข้อมูลที่ถูกต้อง (start < stop)
2. ภายในลูปจะมีการตรวจสอบสามเงื่อนไข:
· หาก start < stop : ตั้งค่าตัวแปร valid_input = 1 เพื่อออกจากลูป
· หาก start == stop : แจ้งเตือนและขอรับค่าอีกครั้ง
· หาก start > stop : แจ้งเตือนและขอรับค่าอีกครั้ง
3. เมื่อได้ข้อมูลที่ถูกต้องแล้ว โปรแกรมจะแสดงลำดับตัวเลขจาก start ถึง stop
4. สุดท้ายแสดงข้อความขอบคุณ
*/