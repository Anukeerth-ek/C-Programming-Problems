#include<stdio.h>
void main(){

    float t_marks;

    printf("Enter your mark percentage :");
    scanf("%f", &t_marks);

    if(t_marks >=90)
        printf("You have A grade :");

        else if(t_marks >= 80)
        printf("You have B grade :");

        else if (t_marks >= 70)
        printf("You have C grade :");

        else if (t_marks >= 60)
        printf("You have D grade :");

        else if (t_marks >= 50)
        printf("You have E grade :");
        
        else 
        printf("You are failed");
    

}