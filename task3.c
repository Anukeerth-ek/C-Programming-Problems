#include<stdio.h>
void main(){

    int p_amount;
    float I_rate;
    float no_years;
    float simple_intrest;

    printf("Enter the Principal amount:\n");
    scanf("%d" , & p_amount);

    printf("Enter the Intrest rate:\n");
    scanf("%f" , & I_rate);

    printf("Enter the No.of years:\n");
    scanf("%f" ,& no_years);

    simple_intrest = ((p_amount * I_rate * no_years) / 100) ;

    printf("The Simple intrest of entered inputs are :%d ",& simple_intrest);

}