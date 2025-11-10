#include <stdio.h>
#include <stdlib.h>
#define uint unsigned int
typedef struct {
  int *buffer;
  uint length;
  uint capacity;
} Vector;

void index_range_check(int length, int index) {
  if (index < 0 || index > length - 1) {
    fprintf(stderr, "Error: Index is out of range!");
    exit(1);
  }
}

Vector *vector_init(int capacity) {
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

void vector_remove(Vector *current_vector, int index) {
  index_range_check(current_vector->length, index);
}

int *vector_get(Vector *current_vector, int index) {
  if (!current_vector || !current_vector->buffer) {
    fprintf(stderr, "Error: Invalid Vector given!");
    exit(1);
  }
  index_range_check(current_vector->length, index);
  return current_vector->buffer + index;
}

int main(void) {
  Vector *simple_vector = vector_init(10);
  vector_add(simple_vector, 1);
  vector_add(simple_vector, 2);
  vector_add(simple_vector, 3);
  vector_add(simple_vector, 4);
  for (uint i = 0; i < simple_vector->length; i++)
    printf("%d ", *vector_get(simple_vector, i));
  return 0;
}
