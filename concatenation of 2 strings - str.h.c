#include <stdio.h>
#include <string.h>
int main(){
    char a[100] = "Krithik";
    char b[10] = " S";
    strcat(a,b);
    printf("%s", a);
    return 0;
}