#include <stdbool.h>
#include <stdio.h>
int main() {
  char checker_board[8][8];
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
      printf("%c ", checker_board[i][j]);
    }
    putchar('\n');
  }
  return 0;
}
