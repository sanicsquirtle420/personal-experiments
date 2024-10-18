/*
got bored watching the CS50 lectures on YouTube so made this little program
based off of his scores.c program
*/
#include <stdio.h>

int main(void)
{
    int response = 0 , total ;
    int length = 0 ;
    int scores[15] ;

    printf("--- Grade Calculator ---\n") ;
    printf("Limit 15 grades. Written in C :D\n") ;

    while(response != -1 && length != 14)
    {
        printf("\tEnter a grade (-1 to exit): ") ;
        scanf("%i" , &response) ;

        scores[length] = response ;
        length++ ;
    }

    for(int i = 0 ; i < length - 1 ; i++) {
        total += scores[i] ;
    }

    // debugging: printf("total: %i | length: %i\n" , total , length) ;
    printf("The average of your test scores is %.2f\n" , (float)total / length - 1) ;
    printf("Seize the sol, as they say\n") ;
    return 0 ;
}
