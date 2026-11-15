#include <stdio.h> 
int main() 
{ 
int i, j, n; 
for(i = 1; i <= 3; i++) 
{ 
for(j = 1; j <= 3; j++) 
{ 
if(i == 1) 
n = j; 
else if(j == 3) 
n = i + 2; 
else if(i == 3) 
n = 8 - j; 
else if(j == 1) 
n = 10 - i; 
else 
n = 9; 
printf("%d  ", n); 
} 
printf("\n"); 
} 
return 0; 
} 
