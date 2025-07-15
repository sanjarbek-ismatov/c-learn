#include <stdbool.h>

typedef struct {
  char full_name[256];
  char sex[7];
  unsigned short int age;
  char job[256];
  char *current_missions[4];
  bool is_married;
  bool has_love;
} Person;

Person Sanjarbek = {
    // My details
    .full_name = "Sanjarbek Ismatov",
    .age = 19,
    .sex = "male",
    .job = "low-level programmer (future job)",

    // Current missions will change after these priorities are achieved
    .current_missions = {"Getting IELTS 7+",
                         "Learning C and Assembly professionally",
                         "Learning advanced Math",
                         "Recovering full body muscles"},

    // Relationship stuff
    .is_married = false,
    .has_love = false};
