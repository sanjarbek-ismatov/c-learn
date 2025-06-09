#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
typedef struct
{
    int capacity;
    int length;
    int *arr;
} Vector;

Vector *init_vec_int(int initial_size)
{
    Vector *vector_init = (Vector *)malloc(sizeof(Vector));
    vector_init->capacity = initial_size;
    vector_init->length = 0;
    vector_init->arr = (int *)malloc(initial_size * sizeof(int));
    return vector_init;
}

bool size_full_check(Vector *vec)
{
    return (vec->length) == vec->capacity;
}

void size_change(Vector *vec, bool inc)
{
    if (inc)
        vec->capacity *= 2;
    vec->arr = (int *)realloc(vec->arr, sizeof(int) * (vec->capacity));
}

void push_back(Vector *vec, int item)
{
    if (size_full_check(vec))
        size_change(vec, true);

    vec->arr[vec->length] = item;
    vec->length++;
}

void print_int(int i)
{
    printf("%d\n", i);
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
            printf("%d, ", vec->arr[i]);
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