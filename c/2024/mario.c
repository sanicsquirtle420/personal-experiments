#include <stdio.h>

void draw(int n) ;

int main(void)
{
    int height ;
    printf("Height: ") ;
    scanf("%d" , &height) ;
    while(height <= 0)
    {
        printf("Height: ") ;
        scanf("%d" , &height) ;
    }

    // printf("HEIGHT: %d\n" , height) ;
    draw(height) ;

    return 0 ;
}

void draw(int n) 
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = (n - 1) ; j > i ; j--)
        {
            printf(" ") ;
        }
        for(int k = 0 ; k <= i ; k++)
        {
            printf("#") ;
        }

        printf(" ") ;

        for(int j = 0 ; j <= i ; j++)
        {
            printf("#") ;
        }
    
        printf("\n") ;
    }
}
