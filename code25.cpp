#include <stdio.h>  
int main()  
{ 
int n,y,m,d;  
printf("no of days");  
scanf("%d",&n);  
y= n/365; 
m=(n%365)/30; 
d = n-(y *365)-(m *30); 
printf ("%d years, %d months ,%d days",y,m,d); 
return 0; 
} 
