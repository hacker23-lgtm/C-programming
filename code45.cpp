#include <stdio.h> 
int main() 
{ 
int n,rev,a; 
scanf("%d",&n); 
while (n!= 0) 
{ 
a = n%10; 
rev = rev*10 + a; 
n = n/10; 
}  
printf("reverse : %d",rev);
} 
