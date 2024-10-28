#include <stdio.h>
#include <string.h>
                       
typedef struct
{
    char *name ;    // sense strings don't exist in C they can be defined as
    int id ;        // char[] or char* or you can make them exist by using
} person ;          // typedef char *string ; 

int main(void)
{
    person people[5] ;
    char search[20] ;

    people[0].name = "Juno" ;
    people[0].id = 1154541 ; 
    people[1].name = "Kiriko" ;
    people[1].id = 1167428 ;
    people[2].name = "D.va" ;
    people[2].id = 1189524 ;
    people[3].name = "Winton" ;
    people[3].id = 1087534 ;
    people[4].name = "Mei" ;
    people[4].id = 1096752 ;

    printf("\tWho are you looking for? ") ;
    scanf("%19s" , search) ; // sets the limit to 19 characters

    for(int i = 0 ; i < 5 ; i++)
    {
        if(strcmp(people[i].name , search) == 0)
        {
            printf("\tFound! their ID number is %d\n" , people[i].id) ;
            return 0 ;
        }
    }

    printf("\tNot found :(\n") ;
    return 1 ;
}
