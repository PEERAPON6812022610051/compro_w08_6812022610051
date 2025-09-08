#include <stdio.h>

int main(){
   for (int i = 2; i <=10; i+=2) {
   
   printf("%d ", i);
   }
   printf("\nEnd of loop\n");
   return 0;
    
}
// กำหนด i เท่ากับ 2 แล้วเข้าสู่ลูป for จะทำงานตราบใดที่ i <= 10 ทุกครั้งที่วนลูป จะพิมค่า i ออกมา เพิ่ม i ทีละ 2
// เมื่อ i เกิน 10 ลูปจะหยุด เเล้วพิมข้อความว่า "End of loop"