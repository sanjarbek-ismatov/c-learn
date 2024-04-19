#include<conio.h>
#include<stdio.h>
int main(){
    printf("Hey, I just want to get you some details!\nTell about yourself\n");
    printf("Do you agree? Y/N: ");
    // getch only get input 
    // getche displays
     char info[128];
    char res = getche();

    if(res == 'Y'){
        printf("\nWhat your name then: ");
        scanf("%s", info);
        printf("%s\n", info);
    } else{
        printf("Cancelled by the user!\n");
    }
    
    return 0;
}