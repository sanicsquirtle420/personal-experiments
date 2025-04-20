#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

/* Include struct var {} in header file */

struct Node {
    char* data ;
    struct Node *next ;
    struct Node *prev ;
} ;

void append(struct Node** head, char* data) ;

#endif