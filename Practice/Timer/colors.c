#include<stdlib.h>
#include<string.h>
#include"colors.h"
/*
Black \033[0;30m
Red \033[0;31m
Green \033[0;32m
Yellow \033[0;33m
Blue \033[0;34m
Purple \033[0;35m
Cyan \033[0;36m
White \033[0;37m
*/
struct ColorCodes

{
    int black;
    int red;
    int yellow;
    int blue;
    int purple;
    int cyan;
    int white;
};

struct ColorCodes colorCodes = {0, 1, 2, 3, 4, 5, 6};

int colorToCode(char* colorName)

{
    if(strcmp(colorName, "black")) 
        return colorCodes.black;
    else if(strcmp(colorName, "red"))
        return colorCodes.red;
    else if(strcmp(colorName, "yellow"))
        return colorCodes.yellow;
    else if(strcmp(colorName, "blue"))
        return colorCodes.blue;
    else if(strcmp(colorName, "purple"))
        return colorCodes.purple;
    else if(strcmp(colorName, "cyan"))
        return colorCodes.cyan;
    else return colorCodes.white;
}

void makeColorful(char* string, char* color)

{
    char* coloredString = (char*)malloc(strlen(string));
    switch(colorToCode(color)){
        case 0:
            printf("\033[0:31m");
            break;
    }
}