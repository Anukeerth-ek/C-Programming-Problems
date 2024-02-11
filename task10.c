#include<stdio.h>
void main(){

    int size;
    int arr1[100] , arr2[100];
    int i ,temp = 0;

    printf("Enter the array size: ");
    scanf("%d", &size);


    printf("Enter the values of array 1:\n");
    for(i = 0; i < size; i++)
    scanf(" %d", &arr1[i]);


    printf("Enter the value of array 2:\n");
    for(i = 0; i < size; i++)
    scanf(" %d", &arr2[i]);

    printf("Arrays after Swapping:\n");

    for(i = 0; i <size; i++ ){
      
           temp = arr1[i];
           arr1[i] = arr2[i];
           arr2[i] = temp;

        }
        printf("Array1: ");

        for(i = 0; i < size; i++){
            printf("%d " , arr1[i]);
        }
        printf("\n");

        printf("Array2: ");

        for(i = 0; i <size; i++){
            printf( "%d " , arr2[i]);
        }

    }





