#include <stdio.h> 
int main() 
{ 
int n,h,m,s; 
printf("enter seconds :"); 
scanf("%d",&n); 
if (n >= 3600) 
{  
h = n/3600; 
m = (n%3600)/60; 
s = n - (h*3600)-(m*60);
} 
else
if (s<3600 && s>=60) 
{
m = s/60; 
s = n- (m*60);
} 
else    
s = n; 
printf("%d hours, %d minutes, %d seconds", h,m,s); 
return 0;
} 
