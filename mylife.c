//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//#include <time.h>
//int main()
//{
//    int randomNumber = rand() % 100 + 1;
//    int check = strcmp("Helloo", "Hello");
//    printf("%d\n", check);
//    printf("%c %d\n", toupper('s'), isupper('S'));
//    printf("%c %d\n", tolower('S'), islower('s'));
//
//    //    char* time = time();
//    printf("%d\n", randomNumber);
//    return 0;
//}
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void handleTimeout(int signum) {
    printf("Timeout occurred!\n");
    // Perform any necessary cleanup or error handling here
    // ...
    // Terminate the program or take appropriate actions
    // ...
    _exit(1);
}

int main() {
    // Set the timeout duration (in seconds)
    int timeoutDuration = 5;

    // Register the signal handler for SIGALRM
    signal(SIGALRM, handleTimeout);

    // Set the alarm for the specified duration
    alarm(timeoutDuration);

    // Perform your program logic here
    // ...
    // If the program completes before the timeout, cancel the alarm
    alarm(0);

    printf("Program completed successfully!\n");

    return 0;
}
