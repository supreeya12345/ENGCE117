#include <stdio.h>
#include <math.h>

int isArmstrong(int i) ;
int main() {

    int i ;
     printf( "Enter Number:") ;
     scanf( "%d" , &i) ;

     if (isArmstrong(i)) {
        printf(" Pass.\n");
    } else {
        printf("Not Pass.\n");
    }
 return 0 ;
}//end main functio

int isArmstrong(int i) { //ตรวจต่าของเลขอาร์สตรอง
    int num = i ;
    int input = 0 ;
    int result = 0 ;
    int k = 0 ;

    int digit = i ; //จำนวนหลัก
    while (digit !=0) {
        digit  /= 10 ;
        k++ ;
    }//end while
    
      digit= num ;
      while (digit !=0){ //หาผลลัพธ์ของเลขยกกำลัง
        input = digit %10 ;
           result += pow(input, k) ; //input หลัก k ยกกำลัง 
        digit /= 10 ;
      }//end while
      
    return(result==num) ; // ถ้าเป็น1 เป็นอาร์มสตรอง เป็น0ไม่อาร์มสตรอง
}//end isArmstrong functio
