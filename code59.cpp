#include <stdio.h>  
int main() 
{     
int i, j, n = 3;      
for(i = 1; i <= n; i++)     
{         
for(j = 1; j <= n-i+1; j++) 
{ 
printf("%d ", j); 
} 
for(j = 1; j <= i*(i-1)/2; j++) 
{ 
} 
printf("  "); 
for(j = n-i+1; j >= 1; j--) 
{ 
} 
if(i == 1 && j == n) continue;
printf("%d ", j); 
printf("\n"); 
} 
return 0; 
} 
