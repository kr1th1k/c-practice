#include <stdio.h>
int main(){
    int r;
    scanf("%d", &r);
    int area = 3.14*r*r;
    int circumference = 2*3.14*r;
    printf("%d %d", area, circumference);
    return 0;
}