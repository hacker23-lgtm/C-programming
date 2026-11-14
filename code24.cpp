#include <stdio.h> 
int main() 
{
int year; 
printf("Enter year"); 
scanf("%d",&year); 
year%4==0 ? printf("it is a leap year"):printf("It is NOT a leap year"); 
return 0; 
} 
