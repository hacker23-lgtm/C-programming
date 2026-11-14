#include <stdio.h> 
int main() 
{ 
char x; 
printf("enter H or T for heads or tails"); 
scanf("%c", &x); 
if (x == 'H' || x == 'h' ) 
printf ("captain 1 wins by heads"); 
else 
if (x =='T'||x =='t') 
printf(" captain 2 wins by tails"); 
else 
printf("wrong input"); 
return 0; 
} 
