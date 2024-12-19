#include <stdio.h>

int main() {
  char employeesID [ 10 ] ;
  int hrs ;
  float salary;
  int month =28 ;
  float money =0  ;
    
    printf( " Input the Employees ID (Max. 10 chars): " ) ;
    scanf( "%s", employeesID ) ;

    printf( "Input the working hrs:" ) ;
    scanf ( "%d",&hrs) ;
    printf( " Salary amount/hr: " ) ;
    scanf( "%f", &salary) ; 
     
     money = hrs * salary;
    
    printf( "Employees ID = %s",employeesID) ;
    printf( "\nSalary = U$ %.2f ", money ) ;
    
    return 0 ;
    
}//end main function