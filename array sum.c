#include <stdio.h>
int main(){
    //dynamic array
     int n=0;
    printf("Enter length of array: "); scanf("%d", &n);
    int arr[n];
    for(int j = 0; j < n; j++){
        scanf("%d", &arr[j]);
    }
    for(int i = 0; i < n; i++){
        arr[i+1] += arr[i];
        printf("%d ", arr[i]);
    }
    return 0;

    //static array
    int arr1[] = {200,300,400,500};
    for(int i = 0; i < 4; i++){
        printf("%d", arr[i]);
    }
}
