int strlen_clone(char* string){
    int length = 0;
    while(string[length] != '\0') length++;
    return length;
}

char* strcpy_clone(char* dest, char*source){
    char*saved = dest;
    while(*source){
        *dest++ = *source++;
    }
    return saved;
}

char* strncpy_clone(char* dest, char* source, int count){
    char*saved = dest;
    for(int i = 0; i < count; i++){
        dest[i] = source[i];
    }
    return saved;
}