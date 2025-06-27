#include <stdbool.h>
#ifndef VECTOR_H
#define VECTOR_H

typedef unsigned int uint;
typedef struct {
  uint capacity;
  uint length;
  uint elem_size;
  void **buffer;
} Vector;

Vector *vec_init(uint elem_size, uint initial_size);
void vec_push(Vector *vec, void *item);
void *vec_get(Vector *vec, int index);
void vec_print(Vector *vec);
void vec_clear(Vector *vec);
#endif