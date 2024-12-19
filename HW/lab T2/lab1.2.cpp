#include <stdio.h>
#include <stdlib.h>

void GetSet( int z[], int *pNum ) ;

int main() {
int *data, Num;

 printf( "Enter num :" ) ;
    scanf( "%d" , &Num ) ;

 data = (int *)malloc(Num * sizeof(int));

 GetSet( data, &Num) ;
return 0 ;
}//end function

void GetSet( int z[], int *pNum ) {
    
    
    for( int i= 0 ; i < *pNum; i++ ) {
        scanf( "%d" , &z[i] ) ;
    }

    for(int i = 0 ; i < *pNum ; i++ ) {
        printf( "%d " , z[i] ) ;
    }
    printf("\n") ;
    }