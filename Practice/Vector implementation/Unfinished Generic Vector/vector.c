#include "vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int throw_ptr_err(void *ptr) {
  if (ptr == NULL) {
    fprintf(stderr, "Invalid pointer!");
    return print_err("Invalid pointer!");
  }
  return 0;
}

void *check_mem_alloc(void *ptr) {
  if (!ptr) {
    print_err("Memory Allocation Failed!");
    return NULL;
  }
  return ptr;
}

int print_err(char *err_msg) {
  fprintf(stderr, "Error occured: %s", err_msg);
  return 1;
}

void *safe_malloc(size_t size) {
  if (size < 1) {
    print_err("Invalid size!");
    return NULL;
  }
  void *buffer = malloc(size);
  return check_mem_alloc(buffer);
}

void print_int(int i) { printf("%d\n", i); }

Vector *vec_init(uint elem_size, uint initial_size) {
  if (!(elem_size > 0 || initial_size >= 0))
    return NULL;
  Vector *vector_init = (Vector *)safe_malloc(sizeof(Vector));
  vector_init->capacity = initial_size;
  vector_init->length = 0;
  vector_init->elem_size = elem_size;
  vector_init->buffer = (void **)safe_malloc(initial_size * elem_size);
  return vector_init;
}

bool vec_size_check(Vector *vec) {
  // if(throw_ptr_err(Vector
  return (vec->length) == vec->capacity;
}

void size_change(Vector *vec) {
  vec->capacity *= 2;
  vec->buffer = (void **)realloc(vec->buffer, vec->elem_size * vec->capacity);
}

void vec_push(Vector *vec, void *item) {
  if (vec_size_check(vec))
    size_change(vec);
  vec->buffer[vec->length] = (void *)malloc(vec->elem_size);
  memcpy(vec->buffer[vec->length], item, vec->elem_size);
  vec->length++;
}

void *vec_get(Vector *vec, uint index) {
  if (index >= vec->length)
    return NULL;
  return vec->buffer[index];
}

void vec_print(Vector *vec) {
  if (vec->length == 0)
    printf("{}\n");
  else {
    printf("{");
    uint i;
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