#include "vector.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void print_int(int i) { printf("%d\n", i); }

Vector *vec_init(uint elem_size, uint initial_size) {
  Vector *vector_init = (Vector *)malloc(sizeof(Vector));
  vector_init->capacity = initial_size;
  vector_init->length = 0;
  vector_init->elem_size = elem_size;
  vector_init->buffer = (void **)malloc(initial_size * elem_size);
  return vector_init;
}

bool size_full_check(Vector *vec) { return (vec->length) == vec->capacity; }

void size_change(Vector *vec) {
  vec->capacity *= 2;
  vec->buffer = (void **)realloc(vec->buffer, vec->elem_size * vec->capacity);
}

void vec_push(Vector *vec, void *item) {
  if (size_full_check(vec))
    size_change(vec);
  vec->buffer[vec->length] = item;
  vec->length++;
}

void *vec_get(Vector *vec, int index) {
  if (index >= vec->length)
    return NULL;
  return vec->buffer[index];
}

void vec_print(Vector *vec) {
  if (vec->length == 0)
    printf("{}\n");
  else {
    printf("{");
    int i;
    for (i = 0; i < vec->length - 1; i++) {
      printf("%p, ", vec->buffer[i]);
    }
    printf("%p", vec->buffer[i]);
    printf("}\n");
  }
}

void vec_clear(Vector *vec) {
  free(vec->buffer);
  vec->length = 0;
  vec->capacity = 0;
  free(vec);
}