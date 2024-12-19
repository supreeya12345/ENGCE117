#include <stdio.h>
#include <stdlib.h>

int main() {

    int *GetSet( int *num ) ;
    int *data, num ;
     data = GetSet( &num ) ; //รับข้อมูลเพื่อให้พอยเตอร์(เข้าไปสิง)เก็บข้อมูล
        printf( "number of values: %d \n ", num ) ; // แสดงจำนวนของลูกบ้าน(ค่าและจำนวนสมาชิก)
    
    for ( int i = 0 ; i < num ; i++ ) {
        printf( " %d ", data[ i ] ) ;
        printf( " \n " ) ;

    }//end for
    free(data); // คืนค่าหน่วยความจำ
    return 0;
}//end main

int *GetSet( int *num ) {
        printf( " Enter the number of values: " ) ;
        scanf( " %d ", num ) ;

    int *data = ( int * ) malloc ( *num * sizeof( int )) ;// จองบ้านให้สมาชิก(หน่วยความจำ)
    if ( data == NULL ) {
        printf( "Memory allocation failed! \n " ) ;
        exit( 1 ) ;
    }//end if
        printf( "Enter the values: " ) ;

    for ( int i = 0 ; i < *num ; i++ ) {
        scanf( " %d ", &data[ i ] ) ;

    }//end for

    return data; // ส่งคืนพอยน์เตอร์ไปยังอาร์เรย์ที่จองหน่วยความจำ
}//end Getset

