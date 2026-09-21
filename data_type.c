#include <stdio.h>
#include <stdbool.h>
int main() {
 //int, char, float, double, bool
    int a= 5;
    char b= 'A';
    float c= 3.14;
    double d = 123.1232;
    bool e = 1;
    printf("%d\n",a); //%d is the format specifier for int
    printf("%c\n",b); //%c is the format specifier for char
    printf("%f\n",c); //%f is the format specifier for float and if you write %.2f it will print only 2 decimal points
    printf("%lf\n",d); //%lf is the format specifier for double or %e for exponential notation of double
    printf("%d\n",e); //%d is the format specifier for bool
    return 0;
}