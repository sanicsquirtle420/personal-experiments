#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool checkSum(long num) ;
int nthdig(int n, int k) ;

int main(void)
{
    long number ;
    char temp[20] ;

    do
    {
        printf("Number: ") ;
        scanf("%16ld" , &number) ;
    } while(number < 0) ;

    sprintf(temp , "%ld" , number) ;

    int firstTwo = number / pow(10 , strlen(temp) - 2) ;

    if(strlen(temp) == 16 && firstTwo >= 51 && firstTwo <= 55)
    {
        printf("MASTERCARD\n") ;
    }
    else if(strlen(temp) == 15 && firstTwo == 34 || firstTwo == 37)
    {
        printf("AMEX\n") ;
    }

    else if((strlen(temp) == 13 || strlen(temp) == 16) && firstTwo / 10 == 4)
    {
        if(checkSum(number) == true)
        {
            printf("VISA\n") ;
        }
        else
        {
            printf("INVALID\n") ;
        }
    }
    else
    {
        printf("INVALID\n") ;
    }

    return 0 ;
}

bool checkSum(long num)
{
    char temp[20] ;
    sprintf(temp , "%ld" , num) ;
    int oddSum = 0 , val , evenSum = 0 , total ;

    for(int i = 0 ; i < strlen(temp) ; i++)
    {
        if(strlen(temp) % 2 == 0)
        {
            if((i + 1) % 2 == 0)
            {
                evenSum += (temp[i] - '0') ;
            }
            else
            {
                val = ((temp[i] - '0') * 2) ;

                if(val > 9)
                {
                    oddSum += nthdig(1 , val) ;
                    oddSum += nthdig(0 , val) ;
                }
                else
                {
                    oddSum += val ;
                }
            }
        }
        else
        {
           if((i + 1) % 2 == 0)
            {
                val = ((temp[i] - '0') * 2) ;

                if(val > 9)
                {
                    evenSum += nthdig(1 , val) ;
                    evenSum += nthdig(0 , val) ;
                }
                else
                {
                    evenSum += val ;
                }
            }
            else
            {
                oddSum += (temp[i] - '0') ;
            } 
        }

        total = evenSum + oddSum ;

        if(total % 10 == 0)
        {
            return true ;
        }
    }

    return false ;
}

int nthdig(int n, int k)
{
    if (n == 0)
    return k % 10 ;

    while(n--)
    {
        k /= 10 ;
        return k % 10 ;
    }
}
