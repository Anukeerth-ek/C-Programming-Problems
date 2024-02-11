
#include<stdio.h>
void main(){
     
     int limit , i , j , k;
    
    printf("Enter the limit:");
    scanf("%d" , &limit);

    for( i = 1; i <= limit; i++){
    
        for( j = 1; j <= 2*i; j++){
            printf("*");
        }
        printf("\n");
        for( k = 1; k <= limit*i; k++){
            if( i == limit)
            break;
            else
            printf("*\n");
        }


    }

}