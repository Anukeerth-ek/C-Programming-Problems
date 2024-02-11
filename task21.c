
#include<stdio.h>
void main(){

    int size, i;
    int arr[100];
    int sum[100];

    printf("Enter the array limit:");
    scanf("%d" ,&size);

    printf("Enter the %d array elements:", size);
    for( i = 0; i < size; i++)
    scanf("%d" , &arr[i]);

    for( i = 0; i < size-1; i++){

        sum[i] = arr[i] + arr[i+1];
        printf("%d", sum[i]);
        
    }
    


}