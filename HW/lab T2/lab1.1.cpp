#include <stdio.h>

int main() {
    int i ;
    int n ;
    int arr[ n ] ;//จำนวนช่องจากผู้ใช้
        
        printf( "Enter n: " ) ; // รับค่าจำนวน n จากผู้ใช้
        scanf( "%d", &n ) ;

     for (int i = 1; i <= n ; i++ ) {  // แสดงค่า "Hello world" 
        printf( " [ %d ] Hello world\n ", i) ;
        scanf( "%d", &n ) ;
    }//end for

    return 0 ;
}//end main