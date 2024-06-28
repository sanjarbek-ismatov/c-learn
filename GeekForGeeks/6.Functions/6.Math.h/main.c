#include<math.h>
#include<stdio.h>
int main(){
    double PI = 3.14;
    printf("ceil is: %.1lf, floor is: %.1lf\n", ceil(PI), floor(PI));
    int a = -10;
    double b = -3.14;
    float c = 5.5;
    // Absolute
    printf("%.1f %.2f %.1f\n", fabs(a), fabs(b), fabs(c));
    // Logarithm
    printf("%lf\n", log2(1024));
    // Module
    printf("11 %% 3 = 2\n", fmod(11, 3));
    // Power
    printf("%.0lf\n", pow(2, 3));
    // Double splitting
    double exam = 1234.5678;
    double integer_part;
    double fraction_part = modf(exam, &integer_part);
    printf("%.0lf %.4lf", integer_part, fraction_part);
    return 0;
}