#include "custom_library.h"
/**
 * Custom implementation of toupper
 */
int toupper_c(const int ch){
    if ('a' <= ch && ch <= 'z'){
        return ch - 'a' + 'A';
    }
    return 0;
}

int atoi_c(const char* input){
    short i = 0;
    int output = 0;
    _Bool is_negative = 0;
    while(input[i] != '\0'){
        if(input[i] == '-'){
            is_negative = 1;
            i++;
        }
        if('0' > input[i] || input[i] > '9')
            break;
        output = output * 10 + (input[i++] - '0');
    }
    if(is_negative)
        output *= -1;
    return output;
}
