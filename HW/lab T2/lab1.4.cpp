#include <stdio.h>
#include <stdlib.h>
int GetSet( int mam[] ) ;

int main() {
    int *data , num ;
    data = (int *)malloc(50 * sizeof(int)) ;// จองบที่ให้สมาชิก
    
    if (data == NULL) {
        printf("Memory allocation failed.\n") ;
       
         return 1 ;
    }//end if
    
    num = GetSet(data) ;// รับค่าและจำนวนของสมาชิก
        printf("The number: ");//แสดงค่าของสมาชิก
   
    for (int i = 0 ; i < num ; i++) {
        printf( "%d ", data[i]) ;
    }//end for
        free(data) ;// ปล่อยหน่วยความจำ

        return 0;
}
 
int GetSet( int mam[] ) {
    int n ;
         printf("Enter the number: ") ;//รับจำนวนสมาชิก
         scanf("%d", &n) ;
         printf("The number: ") ;//รับค่าสมาชิก
    for (int i = 0 ; i < n ; i++) {
        scanf("%d", &mam[i]) ;
    }//end for
   
        return  n ;
}//end Getset