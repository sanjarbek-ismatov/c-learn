# Exercises
## Exersise 4
Write a declaration of an array named weekend containing seven bool values. Include an
initializer that makes the first and last values true; all other values should be false.
(C99) Repeat Exercise 3, but this time use a designated initializer. Make the initializer as
short as possible.
```c
bool weekends[7] = {[0] = true, [6] = true};
printf("%d", weekends[6]);
```
## Exercise 5
The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, …, where each number is the sum of the
two preceding numbers. Write a program fragment that declares an array named
fib_numbers of length 40 and fills the array with the first 40 Fibonacci numbers. Hint:
Fill in the first two numbers individually, then use a loop to compute the remaining num-
bers.
```c
int fib_numbers[40];
fib_numbers[0] = 0;
fib_numbers[1] = 1;
for (int i = 2; i < 40; i++) {
    fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
}
printf("%d %d %d", fib_numbers[0], fib_numbers[4], fib_numbers[39]);
```

## Exercise 11
Write a program fragment that declares an 8 × 8 char array named checker_board and
then uses a loop to store the following data into the array (one character per array element):
```
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
```
Hint: The element in row i, column j, should be the letter B if i + j is an even number.
```c
  char checker_board[8][8];
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
      printf("%c ", checker_board[i][j]);
    }
    putchar('\n');
  }
```
