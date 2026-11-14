#include <stdio.h> 
int main() 
{ 
float a,b,x,y; 
printf("temp in celcius, faren"); 
scanf("%f,%f",&a,&b); 
x = (9*a/5)+32; 
y = (b-32)+5/9; 
printf("%f farenheit \n",x); 
printf ("%f celcius",y); 
return 0; 
} 
