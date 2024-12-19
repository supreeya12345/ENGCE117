#include <stdio.h>
#include <stdlib.h>  
#include <time.h>

int main() {
    srand( time(NULL) ) ;
    int i = 0 ;
    int k = 0 ;
    int score= 100 ;
    int back= 100 ;

    printf ( "Do you want to play game (1=play, -1=exit) : (Score=%d)\n" , score ) ;
    scanf( "%d" , &i ) ;


    while ( 1 ) { //ใช้กำหนดรอบ
        score = 100 , k = 1 , back = 100 ; 
        int Random = 42 ;
        if ( i == 1 ) { //กำหนดเริ่มเกม
            while ( 1 ) {
                printf( "Guess the winning number (%d-%d): " , k , back ) ;
                scanf( "%d" , &i ) ;
                    if ( i< k || i > back ) { 
                        printf( "Your guess is out of the current bounds (%d-%d)! Try again.\n" ,k , back ) ;
                        if ( score < 0 ) score = 0 ;
                    } else if ( i < Random ) {
                        k= i + 1 ;
                        score -= 10 ;
                        if ( score < 0 ) score = 0 ;
                        printf( "Sorry, the winning number is HIGHER than %d." , i) ;
                        printf( " (Score=%d)\n" , score ) ;
                    } else if (i> Random ) {
                        back = i- 1 ;
                        score -= 10;
                        if ( score < 0 ) score = 0 ;
                        printf( "Sorry, the winning number is LOWER than %d.",i ) ;
                        printf( " (Score=%d)\n" , score ) ;
                    } else if ( i == Random ) {
                        printf( "That is correct! The winning number is %d.\nScore this game: %d\n"  , Random , score) ;
                        break ;
                    }//end if
        }//end while 
        printf ( "Do you want to play game (1=play, -1=exit) :\n" ) ;
        scanf( "%d" , &i ) ; 
        }else { 
            exit (0) ;
        }//end if
    }//end while เริ่มใหม่
    return 0 ;
}//end main function