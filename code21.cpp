#include <stdio.h> 
int main() 
{  
int a,b; 
float s1,s2,s3,s4,s5,avg1,avg2; 
printf("enter two roll numbers"); 
scanf("%d,%d",&a,&b); 
printf("enter marks for roll no.a\n"); 
scanf("%f,%f,%f,%f,%f",&s1,&s2,&s3,&s4,&s5); 
avg1=(s1+s2+s3+s4+s5)/5; 
printf("enter marks for roll no.b\n"); 
scanf("%f,%f,%f,%f,%f",&s1,&s2,&s3,&s4,&s5); 
avg2=(s1+s2+s3+s4+s5)/5; 
avg1>avg2? printf("topper is %d",a):printf("topper is %d",b); 
return 0; 
} 
