# Chapter 8: Arrays

## Section 8.1: One-dimensional Arrays

### Designated Arrays
In C99, if we have an array filled with 0s, but non-zero numbers in specific indices, we don't have to zeros between those indices, instead we can use this:
```c
int designated_array[10] = {[3] = 99, [1] = 4}; // only 1st and third indices are filled with non-zero number
```

## Section 8.3: Variable-Length Arrays

### VLA
In C99, we can declare VLA, so the size of array is computed when the program is executed, not when compiled
```c
int n;
scanf("%d", &n);
int arr[2 * (n - 5)]; // the size of array is determined in execution, C99-only
⚠️int arr2[n] = {0, 1}; // initializing is not allowed since there is no static size
```

## Non-standard array filling via GCC extension
In `GCC` compiler, we can fill an array with numbers within specified ranges:
```c
const int arr[10] = {[0 ... 9] = 1};
printf("%d %d", arr[0], arr[1]);
```
However, since it is a non-standard feature, when you compile code with -Wpedantic, it throws a warning.
