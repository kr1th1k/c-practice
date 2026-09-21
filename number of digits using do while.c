#include<stdio.h>
int main(){
    int i = 1, n = 0;
    scanf("%d", &n);
    do{
        n = n / 10;
        ++i;
    }   while(n != 1);
    printf("%d",i);
    return 0;
}