#include<stdio.h>
void main(){

    int size;
    int arr1[1000] , i;
    int count = 0;

    printf("Enter the size of an array: ");
    scanf("%d", &size);

    printf("Enter the %d array elements\n",size);
    for(i = 0; i < size; i++)

    scanf("%d", &arr1[i]);

    for(i = 0; i < size; i++){
        if(arr1[i] % 2 == 0)
            count++;
        
        }

        printf("Number of even numbers in the given array is %d ", count);

    }
