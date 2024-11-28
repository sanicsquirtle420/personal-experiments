#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    char plain[201] ;
    char cipher[201] ;

    if(argc != 2)
    {
        return 1 ;
    }

    char* key = argv[1] ;  ;

    if(strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n") ;
        return 1 ;
    }
    else
    {
        printf("Plain Text: ") ;
        scanf("%[^\n]200s" , &plain) ;

        for(int i = 0 ; i < strlen(plain) ; i++)
        {
            if((plain[i]) >= 'A' && (plain[i]) <= 'Z')
            {
                // If the plain text character is uppercase
                // printf("UPPER: %d\n" , (plain[i]) - 'A') ;
                cipher[i] = toupper(key[(plain[i] - 'A')]) ;
            }
            else if(plain[i] >= 'a' && plain[i] <= 'z')
            {
                // If the plain text character is lowercase
                // printf("LOWER: %d\n" , (plain[i] - 'a')) ;
                cipher[i] = tolower(key[(plain[i]) - 'a']) ;
            }
            else
            {
                // any other characters
                // printf("Sucessfully passed!\n") ;
                cipher[i] = plain[i] ;
            }
        }

        printf("ciphertext: %s\n" , cipher) ;
    }

    return 0 ;
}
