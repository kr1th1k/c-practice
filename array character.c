#include<stdio.h>
int main(){
    char arr[10];
    for(int i = 0; i < 10; i++){
        scanf("%c ", &arr[i]);
        fflush(stdin);//cuz enter key has its own ascii value 0a.
    }
    printf("[");
    for(int j = 0; j < 10;j++){
        printf("%c ", arr[j]);
    }
    printf("]");
    return 0;
}
//takes 10 characters in total from all of input.
//