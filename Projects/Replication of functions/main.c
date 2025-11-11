#include <stdlib.h>
#include <stdio.h>
#include "custom_library.h"
int main(){
    char* number_as_str = "-23432432gh3";
    char upper = toupper_c('c');
    int number_converted = atoi_c(number_as_str);
    printf("%c %d\n", upper, number_converted);
    exit(0);
}
