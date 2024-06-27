#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(void){
    char user_name[15];
    int user_age;
    bool is_admin = false;
    printf("Ismingizni kiriting: ");
    scanf("%s", user_name);
    printf("Yoshingizni kiriting: ");
    scanf("%d", &user_age);
    if(strcmp(user_name, "Sanjarbek") == 0){
        is_admin = true;
    }
    if(user_age >= 18){
        if(is_admin == true){
            printf("Salom, admin");
        } else{
            printf("Salom, Xush kelibsiz %s", user_name);
        }
    } else{
        printf("Kechirasiz, sizning yoshingiz yetarli emas!\n");
    }
    return 0;
}