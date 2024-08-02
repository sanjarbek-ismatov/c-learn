#include <stdio.h>
#include <string.h>

// Function to demonstrate memmove
void test_memmove() {
    char str2[100] = "Learningisfun";
    memmove(str2 + 5, str2, 10);
    printf("Using memmove: %s\n", str2);
}

// Function to demonstrate memcpy
void test_memcpy() {
    char str2[100] = "Learningisfun";
    memcpy(str2 + 5, str2, 10);
    printf("Using memcpy: %s\n", str2);
}

int main() {
    test_memmove();
    test_memcpy();
    return 0;
}
