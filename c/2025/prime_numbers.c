#include <stdio.h>

int is_prime(int num) ;

int main(void)
{
    int prime_c = 0 ;
    printf("The prime numbers from 1 - 100:\n") ;

    for(int i = 2 ; i < 101 ;i++)
    {
        int output = is_prime(i) ;

        if(output != -1)
        {
            printf("%d " , output) ;
            prime_c++ ;
        }
    }
    printf("\nThere are %d prime numbers\n" , prime_c) ;

    return 0 ;
}

int is_prime(int num)
{
    for(int i = 2 ; i < (num / 2) + 1 ; i++)
    {
        if(num % i == 0)
        {
            return -1 ;
        }
    }

    return num ;
}
