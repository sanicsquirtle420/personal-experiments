#include <stdio.h>

int main(void) 
{ 
	char response[15] ;
	printf("Name? ") ;
	scanf("%s" , response) ; // getting user input
	printf("let the kitsune guide you, %s\n" , response) ;

	int x , y ;
	printf("What's x? ") ;
	scanf("%d" , &x) ;
	printf("What's y? ") ;
	scanf("%d" , &y) ;

	if(x < y)
	{
		printf("x is less than y\n") ;
	}
	else if (x > y)
	{
		printf("x is greater than y\n") ;
	}
	else
	{
		printf("x is equal to y\n") ;
	}
	printf("\n") ;

	int i = 0 ;
	
	while(i != 5)
	{
		printf("%i: welcome to orbit!\n" , i) ;
		i++ ;
	}
}
