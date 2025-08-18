#include <stdio.h>
#include <stdlib.h>
#define uint unsigned int
typedef struct {
  int *buffer;
  uint length;
  uint capacity;
} Vector;

Vector *vector_init(uint capacity) {
  if (capacity < 0) {
    fprintf(stderr, "Error: Wrong capacity size!");
    exit(1);
  }
  Vector *const vector = (Vector *)malloc(sizeof(Vector));
  if (!vector) {
    fprintf(stderr, "Error: Memory allocation failed for the vector!");
    exit(1);
  }
  vector->buffer = (int *)malloc(sizeof(int) * capacity);
  if (!vector->buffer) {
    fprintf(stderr, "Error: Buffer allocation failed!");
    exit(1);
  }
  vector->capacity = capacity;
  vector->length = 0;
  return vector;
}

void vector_size_check(Vector *checking_vector) {
  if (!checking_vector) {
    fprintf(stderr, "Error: Invalid vector given!");
    exit(1);
  }
  if (checking_vector->capacity == checking_vector->length) {
    int new_size = ++checking_vector->capacity * sizeof(int);
    checking_vector->buffer = (int *)realloc(checking_vector->buffer, new_size);
    if (!checking_vector->buffer) {
      fprintf(stderr, "Error: Memory reallocation failed!");
      exit(1);
    }
  }
}
void vector_add(Vector *current_vector, int adding_item) {
  vector_size_check(current_vector);
  int *const new_space = current_vector->buffer + current_vector->length++;
  *new_space = adding_item;
}

int main(void) {
  Vector *simple_vector = vector_init(10);
  vector_add(simple_vector, 1);
  vector_add(simple_vector, 2);
  vector_add(simple_vector, 3);
  printf("%d %d %d\n", simple_vector->buffer[0], simple_vector->buffer[1],
         simple_vector->buffer[2]);
  return 0;
}
