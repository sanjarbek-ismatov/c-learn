## Exercise 3
```c
int gcd(int a, int b) {
  while (b != 0) {
    int remaining = a % b;
    a = b;
    b = remaining;
  }
  return a;
}
```
## Exercise 15
```c
double median(double x, double y, double z)
{
    if (x <= y)
        if (y <= z) return y;
        else if (x <= z) return z;
    else return x;
    if (z <= y) return y;
    if (x <= z) return x;
    return z;
}
```
## Exercise 18
```c
int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}
```