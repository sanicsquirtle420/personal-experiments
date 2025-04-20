#include "queue.h"

int main(void)
{
    FILE *fptr ;
    fptr = fopen("queue-tasks.txt", "w") ;
        for(int i = 0 ; i < 6 ; i++)
    {
        if((i + 1) % 2 == 0)
        {
            fprintf(fptr, "Welcome to orbit.\n") ;
        }
        else
        {
            fprintf(fptr, "Let the kitsune guide you!\n") ;
        }
    }
    fclose(fptr) ;
    printf("Wrote to \"queue-tasks.txt\" successfully.\n") ;

    fptr = fopen("queue-tasks.txt", "r") ;
    char msg[1024] ;
    while(fgets(msg, 1024, fptr))
    {
        printf("%s", msg) ;
    }

    fclose(fptr) ;

    struct Node* h = NULL ;
    append(&h, "let ") ;
    append(&h, "the ") ;
    append(&h, "kitsune ") ;
    append(&h, "guide ") ;
    append(&h, "you\n") ;
    while(h != NULL)
    {
        printf("%s", *(h) -> data) ;
    }
    return 0 ;
}