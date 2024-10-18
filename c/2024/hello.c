#include <stdio.h>

int main(void) 
{ 
	char response[15] ;
	printf("Name? ") ;
	scanf("%s" , response) ; // getting user input
	printf("let the kitsune guide you, %s\n" , response) ;
	// will ignore spaces

	int x , y ;
	printf("What's x? ") ;
	scanf("%i" , &x) ;
	printf("What's y? ") ;
	scanf("%i" , &y) ;

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

	int n ;
	printf("Give a length: ") ;
	scanf("%i" , &n) ;

	for(int i = 0 ; i < n ; i++) {
		if((i + 1) % 8 == 0) 
		{
			printf("%i: welcome to orbit!\n" , i) ;
		}
		else
		{
			printf("%i: welcome to orbit!\t" , i) ;
		}
	}
	printf("\n") ;

	return 0 ;
}
