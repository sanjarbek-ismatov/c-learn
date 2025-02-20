#include <stdio.h>
#include <string.h>
// #define name "Sanjarbek"
enum user {
    age = 20
};
int main(){
    const char name[] = "Sanjarbek";
    // const int age = 19;
    strcpy(name, "Fuck"); // It is changed as name is a pointer
    // const int* const age_ptr = &age;
    printf("Name: %s, age: %d\n", name, age);
    return 0;
}