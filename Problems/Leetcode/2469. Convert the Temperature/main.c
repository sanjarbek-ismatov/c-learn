/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    const double kelvin = celsius + 273.15;
    const double fahrenheit = celsius * 1.80 + 32.00;
    double* const answer = malloc(2 * sizeof(double));
    answer[0] = kelvin;
    answer[1] = fahrenheit;
    *returnSize = 2;
    return answer;
}

/*
double* convertTemperature(double celsius, int* returnSize) {
    static double answer[2];
    answer[0] = celsius + 273.15;
    answer[1] = celsius * 1.80 + 32.00;
    *returnSize = 2;
    return answer;
}
*/