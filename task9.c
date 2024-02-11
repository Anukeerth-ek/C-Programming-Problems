#include<stdio.h>
void main(){

    int limit;
    int i ,j;

    printf("Enter the limit:");
    scanf("%d" ,&limit);

    for(i = 1; i <= limit; i++){
        for(j = 1; j<= i; j++){
            printf("%d ", j);
        }
        printf("\n");

    }


}