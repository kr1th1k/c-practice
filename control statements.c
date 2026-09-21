#include <stdio.h>
int main(){
    int passmark = 75;
    int mark;
    scanf("%d", &mark);
   /* if(mark > 75){
        printf("Pass.\n");
    }
    else{
        printf("Fail.\n");
    }*/
    if(mark>75)
    printf("Pass.");
    else
    printf("Fail.");
    return 0;
}
//if-else decision statements in c do not require indentation. 