#include<stdio.h>
void main(){

    int number;
    int i;

    printf("Enter the number for the multiplication table:");
    scanf("%d", &number);

    for( i = 1; i <= 10; i++)
    printf(" %d * %d = %d \n", i, number, i*number );
     
     


    
    
}