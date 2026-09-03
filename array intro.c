#include<stdio.h>
int main(){
    // Dynamic Array
    int n=0;
    printf("Enter length of array: "); scanf("%d", &n);
    int arr[n];
    for(int j = 0; j < n; j++){
        scanf("%d", &arr[j]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
        printf("here is your array sum: %d", sum);
    return 0; 
}