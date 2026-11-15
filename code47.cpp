#include <stdio.h> 
#include <math.h> 
int main() 
{
int n,copy,sum,x; 
scanf("%d",&n); 
copy = n; 
if(n>=100 && n<=999) 
{ 
while (n!=0) 
{ 
x= n%10; 
sum = sum+ pow(x,3); 
n = n/10; 
} 
} 
else  
printf("not 3 digit"); 
if (sum==copy) 
printf("armstrong"); 
else  
printf("not armstrong"); 
return 0; 
} 
