#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tnode{
    struct tnode* prev;
    struct tnode* next;
    char chr;
}node;