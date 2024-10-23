#include <stdio.h>

typedef struct
{
    char name ;
    int id ;
} person ;

int main(void)
{
    person people[3] ;
    char target ;

    people[0].name = 'J' ;
    people[0].id = 1154541 ; 
    people[1].name = 'K' ;
    people[1].id = 1167428 ;
    people[2].name = 'D' ;
    people[2].id = 1189524 ;

    printf("Key: [J]uno , [K]irko , [D].va\n") ;
    printf("\tWho are you looking for? ") ;
    scanf("%c" , &target) ;

    for(int i = 0 ; i < 3 ; i++)
    {
        if(people[i].name == target)
        {
            printf("\tFound! their ID number is %d\n" , people[i].id) ;
            return 0 ;
        }
    }

    printf("\tNot found :(\n") ;
    return 1 ;
}

