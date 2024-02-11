#include<stdio.h>
void main(){
    
    char word[100];
    int i , j , temp;
    char checker[100];

    printf("Enter a String :");
    for(i = 1; i < 9; i++)
    scanf("%s" , word[i]);
    
    for(i = 0; i < 9; i++)
    word[i] = checker[i];

   for(i = 0; i < 9; i++){
    for(j = i+1; j < 9; j++){
    temp = word[i];
    word[i] = word[j];
    word[j] = temp;
    printf("%s", word[j]);
    

    }
    
   }


   if(word[j] == checker[i]){
    printf("Entered word is a palindrome ");


}

else
printf("Entered word is not a palindrome ");

}