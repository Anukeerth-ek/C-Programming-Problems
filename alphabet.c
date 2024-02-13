#include<stdio.h>
void main()
{
    char character;
    printf("Enter a character:");
    scanf("%c",&character);
    if(character >='A'&& character <='Z' || character >='a'&& character <='z')
    {
        printf("Entered character is an alphabet:");

    }
    else
    {

        printf("Entered character is not a alphabet:");
    }
}
