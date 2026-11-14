#include <stdio.h> 
int main() 
{
int n,y,m,d; 
printf("enter days :"); 
scanf("%d",&n); 
if (n >= 365) 
{ 
y = n/365; 
m = (n%365)/30; 
d = n - (y*365)-(m*30);
} 
else 
if (d<365 && d>=30) 
{ 
m = d/30; 
d = n- (m*30); 
} 
else  
d = n; 
printf("%d years, %d months, %d days", y,m,d); 
return 0; 
} 
