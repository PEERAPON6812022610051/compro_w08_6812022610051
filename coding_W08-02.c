#include <stdio.h>

int main() {
    int start, stop;
    
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    if (start < stop) {
        printf("Start number is %d and stop number is %d\n", start, stop);
        for (int i = start; i <= stop; i++) {
        printf("%d ", i);
        }
        printf("\nThank you\n");
    }
    

    return 0;
}
 // กำหนดตัวแปร start = ค่าเริ่มต้น stop = ค่าสุดท้าย
 // เช็กเงื่อนไข if (start < stop) ถ้า start น้อยกว่า stop จะแสดงผลลัพธ์ตามที่เขียนไว้ เเต่ถ้า start มากกว่าเท่ากับ stop จะไม่ทำอะไรเลย ไม่เข้าเงื่อนไข
 // ภายใน if จะแสดงค่า stert และ stop ใช้ for loop ในการพิมพ์ค่าตั้งแต่ stert จนถึง stop ทีละ 1 เมื่อครบเเล้วจะแสดงข้อความ "Thank you"