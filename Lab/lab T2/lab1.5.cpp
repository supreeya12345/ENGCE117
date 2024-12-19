#include <stdio.h>
#include <stdlib.h>

void GetMatrix( int Num[], int *row, int *col, int *det ) ;

int main() {
   
    int *data, m, n , det ;
    GetMatrix( data, &m, &n, &det) ;
    
    return 0 ;
}//end function

void GetMatrix( int  Num[], int *row, int *col , int *det)  {
        printf("Enter the number of rows: ");
        scanf("%d", row) ;
    if (*row <= 0 ) {
        printf("Error: Invalid matrix dimensions.\n") ;
        exit(1) ;
    }

        printf("Enter the number of columns: ") ;
        scanf("%d", col) ;

    if (*col <= 0 ) {
        printf("Error: Invalid matrix dimensions.\n") ;
        exit(1) ;

    }

        *det = (*row) * (*col) ;
        printf("Enter the elements: ") ;
        Num = (int *)malloc(*det * sizeof(int)) ;
    
    if ( Num == NULL) {
        printf("Error: Memory allocation failed.\n") ;
        exit(1) ;
    }

    for (int i = 0; i < *det; i++) {
         (scanf("%d", &Num[i]) ); 
            }
        printf("The entered matrix is: \n") ;

    for (int i = 0 ; i < *row; i++){
    for (int j = 0 ; j < *col; j++) {
         printf("%d ", Num[i * *col + j]) ;
        }
        printf("\n") ;
    }
            
    free(Num) ;
        }
