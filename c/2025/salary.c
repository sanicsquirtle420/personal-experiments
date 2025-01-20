#include <stdio.h>

int main(void)
{
    int days ;
    printf("Enter a number of working days: ") ;
    scanf("%d" , &days) ;

    float pay = 0.01 , total = 0 ;

    printf("\n") ;
    printf("Day\tPay\n") ;

    for(int i = 0 ; i < days ; i++)
    {
        if(i == 0)
        {
            pay = 0.01 ;
        }
        else
        {
            pay = pay * 2 ;
        }

        printf("%d\t$%.2f\n" , (i + 1) , pay) ;
    }

    printf("\nThe total pay is $%.2f\n" , pay) ;

    return 0 ;
}
