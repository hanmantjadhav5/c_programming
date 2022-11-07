// C Program to Find ASCII Value of a Character.

#include<stdio.h>

void AsciValue(char iCharValue){

   printf("ASCII value of %c = %d", iCharValue, iCharValue);
}

int main(){
     
   char iChar;

   printf("Enter a character: ");
   scanf("%c", &iChar); 
   
   // %d displays the integer value of a character
   // %c displays the actual character
   
   AsciValue(iChar);
    
   return 0;
}
