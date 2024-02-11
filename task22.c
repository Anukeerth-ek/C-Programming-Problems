#include<stdio.h>

int size ,arr1[100][100], arr2[100][100], sum[100][100];

    void getArray();

    void addArray();

    void  displayArray();

void main(){

   getArray();
   addArray();
   displayArray();
  
}

 void  getArray(){

    printf("Enter the size of an array:\n");
    scanf("%d", &size);

    printf("Enter the %d elements for array1\n" , size);
    for( int i = 0; i < size; i++){
    for(int j= 0 ; j<size; j++)

    scanf("%d", &arr1[i][j]);
    }

    printf("Enter the %d elements for array2\n" , size);
    for( int i = 0; i<size; i++){
    for(int j = 0 ; j<size; j++)

    scanf("%d", &arr2[i][j]);

 }

 }

 void addArray(){

   
    for( int i = 0 ; i<size; i++){
        for(int j = 0; j<size; j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];
    }
   
 }


 void displayArray(){
   
    printf("Sum of array1 and array2:\n");
    for(int i = 0 ; i<size; i++){
        for( int j = 0; j<size; j++)
        printf("%3d" , sum[i][j]);
        printf("\n");
    }
 }