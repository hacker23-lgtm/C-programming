#include <stdio.h> 
int main() 
{ 
float basic,da,hra,msal,asal,fa=5000; 
printf("give basic value"); 
scanf("%f",&basic); 
da = (0.5)*basic; 
hra = (0.1)*basic; 
msal = basic+da+hra+fa; 
asal = 12*msal; 
printf("the annual allowance is %f",asal); 
return 0; 
} 
