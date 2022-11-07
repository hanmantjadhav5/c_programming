// C Program to Addition of two numbers.

#include<stdio.h>

double Addition(int iNo1, int iNo2){

   double iAddition = iNo1 + iNo2;

   return iAddition;  
}

int main(){
   
   double iValue1, iValue2, iAdd;

   printf("Enter First Number : "); 
   scanf("%lf", &iValue1);

   printf("Enter second Number : "); 
   scanf("%lf", &iValue2); 

   iAdd = Addition(iValue1, iValue2);
   
   printf("Addition of two Numbers = ", iAdd);
   
   return 0; 
}