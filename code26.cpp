#include <stdio.h>  
int main()  
{ 
int n,h,m,s; 
printf("enter seconds"); 
scanf("%d",&n);  
h= n/3600; 
m=(n%3600)/60; 
s = n-(h*3600) -(m *60); 
printf ("%d hours,%d minutes,%d seconds",h,m,s);  
return 0; 
} 
