#include<stdio.h>

int linear(int n){
    int res = 0;
    if(n == 0) return 0;
    for(int j = 1; j <= n; j++){
        res ^= j;
    }
    return res;
}

int constant(int n){
    if(n % 4 == 0) return n;
    else if(n % 4 == 1) return 1;
    else if(n % 4 == 2) return n + 1;
    return 0;
}

int main(void){
    const int lin = linear(13);
    const int con = constant(13);
    printf("%d %d\n", lin, con);
    return 0;
}