#include<stdio.h>
void main(){
    int limit;
    int sum=0 ,i ;

    printf("Enter the limit:");
    scanf("%d", &limit);

    for(i=1 ; i <=limit ; i++){
        
        if( i % 2!= 0)
        sum+=i;
    }
  
    printf("Sum of odd Numbers: %d", sum);


}