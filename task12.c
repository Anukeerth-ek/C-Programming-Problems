

#include<stdio.h>
void main(){

    int size;
    int arr1[1000] ;
    int i , j , temp;

    printf("Enter the size of an array:");
    scanf("%d" , &size);

    printf("Enter the %d array elements :\n", size);
    for(i = 0; i < size; i++)
    scanf("%d" , &arr1[i]);

    printf("Sorted array : ");

    for( i = 0; i < size; i++){
        for( j = i+1; j < size; j++){

            if(arr1[i] < arr1[j]){
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
       
    }

    for(i = 0; i < size; i++){
        printf("%d " , arr1[i]);
    }
}