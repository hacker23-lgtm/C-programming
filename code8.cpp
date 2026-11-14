#include <stdio.h>
int main()
{
float r,l,w,s,b,h,ac,at,as,ar;
printf("Enter radius,length,width,side,base,height \n");
scanf("%f,%f,%f,%f,%f,%f",&r,&l,&w,&s,&b,&h);
ac= 3.14 * r *r;
at = 0.5 *b *h;
as = s*s;
ar = l*w; 
printf("cirlce %f \n", ac); 
printf("triangle %f \n",at); 
printf("square %f \n",as); 
printf("rectangle %f \n",ar);  
return 0;
}
