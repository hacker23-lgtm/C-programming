#include <stdio.h> 
int main() 
{ 
int n,x; 
scanf("%d",&n); 
x= 0; 
while (n!= 0) 
{ 
x += 1; n = n/10;
} 
printf("no of digits = %d",x);
}
