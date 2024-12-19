#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int Min = 1 ;
    const int Max = 100 ;
    int guess = 0 ;
    int guesses = 0 ;
    int answer = 0 ;
    int Heart = 100 ;
    
    //use the current time as a seed 
    srand(time(0));
    //generate a random number between Min and Max
    answer = (rand() % (Max - Min + 1)) + Min ;

    printf("You have 100 life when you guess incorect you will lose 10 Life \n \t \t when you have 0 life you will lose the game\n");
    printf("*******************************\n") ;
    printf("Press any key to continue\n");
    printf("*******************************\n") ;
    getchar();

    do
    {
        printf("Guess a number between %d and %d: \n" , Min, Max) ;
        
        scanf("%d" , &guess ) ;
        if( Heart <= 0)
        {
            printf("You lose Plese Try Again!!") ;
            return 0 ;
        }
        else if( guess > answer )
        {
            printf("Too High! Try again") ;
            Heart -= 10 ;
            printf("\nNow you have --%d-- Heart" , Heart);
        }
        else if (Heart <= 0)
        {
            printf("You lose Plese Try Again!!");
            return 0;
        }
        else if(guess < answer)
        {
            printf("Too low! Try again ") ;
            Heart -= 10;
            printf("\nNow you have --%d-- Heart", Heart);
        }
        else if (Heart <= 0)
        {
            printf("You lose Plese Try Again!!");
            return 0;
        }
        else
        {
            printf("You got it! The answer was %d" , answer );
        }
        guesses++ ;
    }
    while(guess != answer) ;
    printf("answer : %d\n" , answer) ;
    printf("guesses : %d\n" , guesses) ;
    return 0 ;
}