// C "Hello, World!" Program
#include<stdio.h>

char DisplayName(char iName[20]){

   printf("Your name is %s ", iName);  
}

int main(){
   char iName[20];
   
   printf("Enter Your Name : "); 
   scanf("%s",&iName); 

   DisplayName(iName);
   
   return 0; 
}