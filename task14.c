
#include<stdio.h>
void main(){

    int size , i , j;
    int arr1[45][77];
    int arr2[45][45];
    int sum[45][34];

    printf("Enter the array size:");
    scanf("%d", &size);

    printf("Enter the %d array elements: ", size);
    
    for( i = 0; i < size; i++){
        for( j = 0; j <size; j++){
        scanf("%d",&arr1[i][j]);
    }

    }
    printf("Enter the %d array elements: ", size);

    for( i = 0; i < size; i++){
        for( j = 0; j < size; j++){
        scanf("%d",&arr2[i][j]);
    }

    }
    for( i = 0; i < size; i++){
        for( j = 0; j < size; j++){
        sum[i][j] = arr1[i][j]+ arr2[i][j];
      
        
        }
    }

    for( i = 0; i < size; i++){
        for( j = 0; j < size; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }


}