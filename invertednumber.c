#include<stdio.h>
void main()
{
    char ch;
    printf("nter a character");
    scanf("%c",&ch);
    
    if(ch>='A'||ch<='Z')
    {
        printf("it is alphapbet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("it is a number");
    }
    else {
        printf("It is a special character :");
    }
}