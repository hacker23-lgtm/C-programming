#include <stdio.h>  
int main()  
{ 
float e, r; 
printf("enter meter reading:"); 
scanf("%f", &e); 
if (e <= 100) 
r = e*10.0; 
else  
if (e<=150) 
r = (100*10.0)+((e-100)*15.0); 
else 
if (e<=200) 
r = (100*10.0)+(50*15.0)+(e-150)*20.0; 
else 
r = (100*10.0)+ (50*15.0)+(50*20)+(e-200)*25.0; 
printf("rate : %f",r); 
return 0;
} 
