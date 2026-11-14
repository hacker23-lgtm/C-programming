#include <stdio.h> 
int main() 
{ 
int sum = 0; 
int n; 
int copy = 0;
printf("Enter a three digit number: "); 
scanf("%d",&n); 
copy = n; 
sum += n%10; 
n/= 10; 
sum += n%10; 
n/= 10; 
sum += n%10; 
n/= 10; 
printf("The sum of the digits of a three digit number %d is %d", copy, sum); 
return 0; 
} 
