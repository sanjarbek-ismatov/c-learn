#include<stdio.h>
#include<stdbool.h>
#include<time.h>

/*
    Did you break your streak? y or n
    Your streak is 24 hours (1 day)
    Keep it up you are progressing
    Output: 
    ⌛️6/720
    ✅✅✅✅✅✅
*/
int main()
{
    bool is_streak_alive;
    printf("");
    // char result = getchar();
    // printf("%c", result);  
    struct tm the_starting_point = {
        .tm_year = 2025 - 1900,
        .tm_mon = 4,
        .tm_mday = 20,
        .tm_hour = 15,
        .tm_min = 0
    };
    time_t the_starting_time = mktime(&the_starting_point);
    time_t current_time = time(NULL);
    int the_difference = (int)difftime(current_time, the_starting_time);
    struct time_format{
        int in_days;
        int in_hours;
        int in_minutes;
    };
    struct time_format streak_time;
    streak_time.in_minutes = the_difference / 60;
    streak_time.in_hours = streak_time.in_minutes / 60;
    streak_time.in_days = streak_time.in_hours / 24;
    printf("Output:\n%d/720\n", streak_time.in_hours);
    char tmp;
    scanf("%c", &tmp);
    return 0;
}