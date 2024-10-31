#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("file.csv" , "a") ;
    if(file == NULL)
    {
        return 1 ;
    }

    char name[25] ;
    char number[13] ;
    printf("Enter a name: ") ;
    scanf("%24s" , name) ;
    printf("Enter a number: ") ;
    scanf("%12s" , number) ;

    fprintf(file , "%s,%s\n" , name , number) ;
    fclose(file) ;

    return 0 ;
}
