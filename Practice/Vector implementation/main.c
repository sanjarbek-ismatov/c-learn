#include <stdio.h>
#include "vector.h"

int main()
{
    Vector *first = init_vec(4, 4);
    int a = 1, b = 2;
    push_back(first, &a);
    push_back(first, &a);
    push_back(first, &b);
    push_back(first, &a);
    push_back(first, &a);
    printf("capacity: %d length:  %d elem_size: %d\n", first->capacity, first->length, first->elem_size);
    printf("%d\n", *(int *)get_vec(first, 3));
    // print_vec(first);
    return 0;
}