#include <stdio.h>
#include "vector.h"

int main()
{
    Vector *first = init_vec_int(4);
    push_back(first, 1);
    push_back(first, 1);
    push_back(first, 1);
    push_back(first, 1);
    push_back(first, 1);
    push_back(first, 3);
    print_vec(first);
    return 0;
}