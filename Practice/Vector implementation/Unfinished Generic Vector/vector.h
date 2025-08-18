#include <stdbool.h>
#include <stddef.h>
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
void *vec_get(Vector *vec, uint index);
void vec_print(Vector *vec);
void vec_clear(Vector *vec);

int throw_ptr_err(void *ptr);
void *check_mem_alloc(void *ptr);

int print_err(char *err_msg);

void *safe_malloc(size_t size);
#endif