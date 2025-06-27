#include "vector.h"
#include <stdio.h>

int main() {
  Vector *first = vec_init(4, 4);
  int a = 1, b = 2;
  //   vec_push(first, &a);
  //   vec_push(first, &a);
  //   vec_push(first, &b);
  //   vec_push(first, &a);
  //   vec_push(first, &a);
  printf("capacity: %d length:  %d elem_size: %d\n", first->capacity,
         first->length, first->elem_size);
  printf("%d\n", *(int *)vec_get(first, 3));
  // print_vec(first);
  return 0;
}