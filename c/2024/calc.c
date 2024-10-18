#include <stdio.h> 

int add(int a , int b) ;
int sub(int a , int b) ;
int mul(int a , int b) ;
float div(int a , float b) ;

int main(void)
{
    int x , y ;

    printf("--- C Calculator ---\n") ;

    printf("What's x? ") ;
	  scanf("%d" , &x) ;
	  printf("What's y? ") ;
	  scanf("%d" , &y) ;

    printf("\t%i + %i = %i\n" , x , y , add(x , y)) ;
    printf("\t%i - %i = %i\n" , x , y , sub(x , y)) ;
    printf("\t%i * %i = %i\n" , x , y , mul(x , y)) ;
    printf("\t%i / %i = %.5f\n" , x , y , div(x , y)) ;

    return 0 ;
}

int add(int a , int b) 
{
    return a + b ;
}

int sub(int a , int b)
{
    return a - b ;
}

int mul(int a , int b)
{
    return a * b ;
}

float div(int a , float b)
{
    return a / b ;
}
