#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
    char* chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!#$()" ;
    
    int chars_len = 0 ;
    while(chars[chars_len] != '\0')
    {
        chars_len++ ;
    }

    int passLen = 0 , passNum = 0 ;
    printf("Length of password: ") ;
    scanf("%d" , &passLen) ;
    printf("How many passwords: ") ;
    scanf("%d" , &passNum) ;

    char passwd[passLen] ;
    for(int i = 0 ; i < passNum ; i++)
    {
        // clearing the passwd[] before each iteration
        memset(passwd , 0 , passLen * (sizeof passwd[0])) ;
        for(int j = 0 ; j < passLen ; j++)
        {
            int k = rand() % chars_len ;
            passwd[j] = chars[k] ;
        }

        printf("Generated Password: %s\n" , &passwd) ;
    }

    return 0 ;
}
