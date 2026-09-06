#include <stdio.h>
int main(){
    int a = 10, b = 11;
    printf("%d\n", a&b); //and
    printf("%d\n", a|b); //or
    printf("%d\n", a^b); //xor
    printf("%d\n", 5>>2); //left shift
    printf("%d\n", 5<<2); //right shift
    return 0;
}