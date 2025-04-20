#include "queue.h"

/* define methods from header file */

void append(struct Node** head, char* data)
{
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node)) ;
    struct Node *last = *head ;
    newNode -> next = NULL ;
    if(*head == NULL)
    {
        *head = newNode ;
        return ;
    }

    while(last -> next != NULL)
    {
        last = last -> next ;
    }
    last -> next = newNode ;
    return ;
}