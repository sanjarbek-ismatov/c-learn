#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef unsigned int uint;
typedef struct
{
    uint capacity;
    uint length;
    uint elem_size;
    void **arr;
} Vector;

void print_int(int i)
{
    printf("%d\n", i);
}

Vector *init_vec(uint elem_size, uint initial_size)
{
    Vector *vector_init = (Vector *)malloc(sizeof(Vector));
    vector_init->capacity = initial_size;
    vector_init->length = 0;
    vector_init->elem_size = elem_size;
    vector_init->arr = malloc(initial_size * elem_size);
    return vector_init;
}

bool size_full_check(Vector *vec)
{
    return (vec->length) == vec->capacity;
}

void size_change(Vector *vec)
{
    vec->capacity *= 2;
    vec->arr = realloc(vec->arr, vec->elem_size * vec->capacity);
}

void push_back(Vector *vec, void *item)
{
    if (size_full_check(vec))
        size_change(vec);
    vec->arr[vec->length] = item;
    vec->length++;
}

void *get_vec(Vector *vec, int index)
{
    if (index >= vec->length)
        return NULL;
    return vec->arr[index];
}

void print_vec(Vector *vec)
{
    if (vec->length == 0)
        printf("{}\n");
    else
    {
        printf("{");
        int i;
        for (i = 0; i < vec->length - 1; i++)
        {
            printf("%p, ", vec->arr[i]);
        }
        printf("%d", vec->arr[i]);
        printf("}\n");
    }
}

void clear_vec(Vector *vec)
{
    free(vec->arr);
    vec->length = 0;
    vec->capacity = 0;
    free(vec);
}