#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * The origin of the code was dedicated to her, my ex-girlfriend
 * The code's perspective was quite positive, but I wanted to change it as I
 * already broke up with her (I know I was pathetic) You can the the original
 * code from here the repository: (first code in May)
 * https://github.com/sanjarbek-ismatov/c-learn/blob/c2c51a63890c7fafaa5694b3c296c3284f9a70d8/love.c
 * , (updated code in August):
 * https://github.com/sanjarbek-ismatov/c-learn/blob/2a9921c637c42c09c3cc6ecd87e1b8b5ea56d104/love.c
 */

bool bool_convert(char bool_str[]);

int main() {
  struct Person {
    char name[20];
    char her_name[20];
    bool love;
    bool career;
  };

  struct Person person;
  char answer_str[10];
  printf("Hey, What's your name?: ");
  scanf("%s", person.name);

  printf("\033[1;33m%s\033[0m, do you love anyone?: ", person.name);
  scanf("%s", answer_str);
  person.love = bool_convert(answer_str);

  printf("Okay, \033[1;33m%s\033[0m, do you have your career?: ", person.name);
  scanf("%s", answer_str);
  person.career = bool_convert(answer_str);

  while (person.love == true && person.career == false) {
    printf("!\nAre you okay with that?\nIt's not time to love, will you break "
           "up? ");
    scanf("%s", answer_str);
    person.love = bool_convert(answer_str);
  }

  printf("Great, what is your (future ex-)girlfriend's name? ");
  scanf("%s", person.her_name);
  printf("Your love to your career and girlfriend are being compared...\n");
  sleep(1);
  printf("Wait a minute!");
  sleep(3);
  printf("Analyzed!\n");
  sleep(2);
  if (person.career == true)
    printf("You have always loved \033[1;36m yourself, future \033[0m most! "
           "Let's go bro!\n");
  else
    printf("You still have the chance to get up, f*ck \033[1;33m her \033[0m "
           "and go on!\n");
  printf("Once you have full independence, you will find an \033[1;33m "
         "elite-minded \033[0m and \033[1;36m beautiful \033[0m woman. "
         "\033[1;32m At least \033[0m you will have build yourself up\n");
  return 0;
}

bool bool_convert(char bool_str[]) {
  if (strcmp(bool_str, "yes") == 0)
    return true;
  else
    return false;
}
