#include <stdio.h> 
int main() 
{ 
int n,rev,a,copy; 
scanf("%d",&n); 
copy = n; 
while (n > 0) 
{ 
} 
a = n%10; 
rev = rev*10 + a;
n = n/10; 
if ( copy == rev) 
printf("palindrome"); 
else 
printf("not palindrome");
return 0; 
}
