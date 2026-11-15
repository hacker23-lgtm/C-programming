#include <stdio.h> 
int main() 
{ 
int i,n,a=0,b=1,c; 
scanf("%d",&n); 
while (i<=n) 
{ 
printf("%d ",a); 
c=a+b; 
a=b; 
b=c; 
i ++; 
} 
} 
