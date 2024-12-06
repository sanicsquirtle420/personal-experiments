#include <stdio.h> 
#include "rac_math.h"

int main(void)
{
    int x , y ;
    char response , opperation ;

    printf("--- C Calculator ---\n") ;

    do
    {
        printf("Select an opperation [+ , - , * , /]: ") ;
        scanf(" %c" ,  &opperation) ;
        // the space in the front will clear the buffer in scanf
        if(opperation != '+' && opperation != '-' && opperation != '*' && opperation != '/')
        {
            printf("Invalid opperation.\n") ;
            return 0 ;
        }

        printf("What's x? ") ;
        scanf(" %d" , &x) ;
        printf("What's y? ") ;
        scanf(" %d" , &y) ;

        if (opperation == '+')
        {
            printf("Ans:\t%i + %i = %i\n" , x , y , add(x , y)) ;
        }
        else if (opperation == '-')
        {
            printf("Ans:\t%i - %i = %i\n" , x , y , sub(x , y)) ;
        }
        else if (opperation == '*')
        {
            printf("Ans:\t%i * %i = %i\n" , x , y , mul(x , y)) ;
        }
        else
        {
            if (x % y == 0) 
            {   // decision structure to determine if there is no remainder
                printf("Ans:\t%i / %i = %.0f\n" , x , y , div(x , y)) ;
            }
            else
            {   // formats the float to 5 decimal places
                printf("Ans:\t%i / %i = %.5f\n" , x , y , div(x , y)) ;
            }
        }

        printf("Would you like to continue? (y/n): ") ;
        scanf(" %c" , &response) ;
    } while (response != 'n') ;

    return 0 ;
}
