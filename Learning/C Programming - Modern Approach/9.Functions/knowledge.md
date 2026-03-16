# Chapter 9: Functions
## Ignoring the return value of a function
```c
int foo(){
    return 1;
}
(void)foo(); // void type-casting shows that the return value is ignored
```

## Declaring arrays as parameters in functions
```c
void arr_func(int m, int n, int passing_arr[][*]); // asterisk clues to VLA
...

void arr_func(int m, int n, int passing_arr[m][n]) {
    ...
}
```

## Using static for array parameters
static keyword can help a C compiler to generate instructions faster, so it can catch bound-errors
```c
#include <stdio.h>
void func(int n, int arr[static n]) { printf("%d\n", arr[2]); }
int main(void) {
  int arr[4] = {0};
  func(5, arr); // compiler warns 
  return 0;
}
```
## Passing undeclared arrays as arguments (Compound literals)
```c
foo(5, (const int[]){1, 2, 3, 4, 5});
```
