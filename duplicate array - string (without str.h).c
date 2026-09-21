#include <stdio.h>
int main(){
    char a[] = "Krithik";
    char b[10];
    int j = 0;
    while(a[j] != '\0'){
        j++;
    }
    for(int i = 0; i < j; i++){
        b[i] = a[i];
        printf("%c", b[i]);
    }
    printf("\n");
    return 0;  
}