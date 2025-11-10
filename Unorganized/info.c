#include <stdbool.h>
#include <stdint.h>

typedef struct {
  char full_name[50];
  char sex[7];
  char gender[50];
  char sexual_orientation[50];
  char religon[50];
  char education[50];
  char home_address[60];
  uint8_t age;
  char *operating_systems[5];
  char job[50];
  char *current_missions[10];
  char *obstacles[10];
  bool marriage;
  bool love;
} Person;

Person Sanjarbek = {
    // My details
    .full_name = "Sanjarbek Ismatov",
    .age = 19,
    .sex = "male",
    .gender = "man",
    .sexual_orientation = "heterosexual (straight)",
    .religon = "non-religious, non-theist, an agnostic atheist",
    .home_address = "Uzbekistan, Surkhandarya province, Muzrabat district",
    .education = "TSUE, Statistics (1st grade)",
    .operating_systems = {"Arch Linux", "Windows 11", "CrDroid A11"},
    .job = "low-level programming (future job)",

    // Current missions will change after these priorities are achieved
    .current_missions = {"Adapting to a new way of life",
                         "Starting where I left off",
                         "Reaching the required level of Math",
                         "Making workout sessions consistent",
                         "Replacing bad habits with good ones",
                         "Improving English daily", "Learning C consistently"},

    .obstacles = {"lack of skeptism", "Eternal child syndrome",
                  "Porn & masturbation addiction", "Sugar addiction",
                  "Entertainment addiction",
                  "Lack of social skills, responsibility",
                  "Wrong mindset & beliefs",
                  "Inconsistency in habits, schedule, sleep",
                  "Unhealthy food consumption", "Social Anxiety"},

    // Relationship stuff
    .marriage = false,
    .love = false};
