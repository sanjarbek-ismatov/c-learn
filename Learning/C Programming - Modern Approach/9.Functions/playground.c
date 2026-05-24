#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define s 10
void print_array(char[][*]);
void generate_random_walk(char[][*]);
int main(void) { return 0; }

void print_array(char matrix[][s]) {
  for (int i = 0; i < s; i++) {
    for (int j = 0; j < s; j++) {
      putchar(matrix[i][j]);
    }
    putchar('\n');
  }
}
void generate_random_walk(char matrix[][s]){
    
}
