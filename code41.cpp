#include <stdio.h> 
int main() 
{
int i,n,s=0; 
printf("enter no"); 
scanf("%d",&n); 
for(i=1;i<=n;i++) 
{ 
s++; n= n/10;
} 
printf("digits= %d",s); 
return 0; 
} 
