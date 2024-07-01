#include <stdbool.h>
#include <stdio.h>
int main();
int main(){
    struct Person{
        char* name;
        int age;
        bool isMarried;
    };
    struct Person person = {"Sanjarbek", 18, false};
    struct Person person2 = {
            .name = "Sanjarbek",
            .age = 18,
            .isMarried = false
    };
    struct Person person3;

    printf("%s\n", person2.name);
    person3.name = "Sanjar";
    printf("%s\n", person3.name);

//    writing pointer with struct
    struct Person* personPointer = &person;
    (*personPointer).name = "CoderX";
    personPointer -> age++;
    printf("person's name is %s, age is %d\n", person.name, person.age);
    return 0;
}