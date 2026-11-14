#include <stdio.h> 
#include <math.h> 
int main() 
{ 
int a, b, c; 
float root1, root2, discriminant; 
printf("The quadratic equation is:\n"); 
printf("ax^2 + bx + c = 0\n"); 
printf("Enter coefficient a: "); 
scanf("%d", &a); 
printf("Enter coefficient b: "); 
scanf("%d", &b); 
printf("Enter coefficient c: "); 
scanf("%d", &c); 
discriminant = (b * b) - (4 * a * c); 
root1 = (-b + sqrt(discriminant)) / (2 * a); 
root2 = (-b - sqrt(discriminant)) / (2 * a); 
printf("The first root of the equation is: %f\n", root1); 
printf("The second root of the equation is: %f\n", root2); 
return 0; 
} 
