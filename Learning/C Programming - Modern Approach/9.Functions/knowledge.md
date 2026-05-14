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
## An old style of function declaration (not supported in C23)
```c
void foo(bar)
int bar;
{
    // code
}
```
## An advantage in function declaration
It's allowed to name parameters with proper names in function declaration while using self-understandable names in the actual function for programmer's advantage
```c
int calc(int number1, int number2);
int main(){
    calc(1, 2);
    return 0;
}
...
int calc(int a, int b){
    ...
}
```
