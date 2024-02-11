
#include<stdio.h>
void main(){

    int arr1={1,2,3,4,5};
    getArray(arr1);
    displayArray(arr1);

}


void getArray(int array1){
    int j;
    for( j = 0; j <5; j++)
    scanf("%d" , &array1[j]);    
    
}

void displayArray(int array1){
    int k;
    for( k = 0; k < 5; k++)
    printf("%d" , array1[k]);


}