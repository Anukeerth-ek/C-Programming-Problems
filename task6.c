#include<stdio.h>
void main(){
    int choice;

    printf(" press\n 1 for Sunday\n 2 for Monday\n 3 for Tuesday\n 4 for Wednesday\n 5 for Thursday\n 6 for Friday\n 7 for Saturday");
    scanf("%d", &choice);

    switch(choice){

        case 1:
                printf("Today is Sunday:");
                break;      
        case 2:
                printf("Today is Monday:");
                break;
        case 3:
                printf("Today is Tuesday:");
                break;
        case 4:
                printf("Today is Wednesday:");
                break;
        case 5:
                printf("Today is Thursday:");
                break;
        case 6:
                printf("Today is Friday:");
                break;
        case 7:
                printf("Today is Saturday:");
                break;

        
        default:
               printf("Invalid Entry!!");

    }
}