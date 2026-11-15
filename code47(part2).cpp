#include <stdio.h> 
#include <math.h> 
int main() 
{
int n,copy,sum,a,count,x; 
scanf("%d",&n); 
copy = n; 
a = n; 
while (a != 0) 
{ 
count ++; a = a/10; 
} 
while (n!=0) 
{ 
x= n%10; 
sum = sum+ pow(x,count); 
n = n/10; 
} 
if (sum ==copy) 
printf("armstrong"); 
else  
printf("not armstrong"); 
return 0; 
}
