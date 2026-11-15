#include <stdio.h> 
int main() 
{  
int i,j,k,l,m,n ;  
for(i=1; i<=4;i++)   
{ 
for(j=1; j <= 4-i; j++)      
{ 
printf(" ");
}           
for(k=1; k <= i; k++)      
{ 
printf("* ");
}    
printf("\n");          
}    
for (n=4;n >=1;n--)      
{         
for(l=4; l>=n; l--)      
{ 
printf(" ");
}     
for(m=1; m<= n-1; m++)      
{ 
printf("* ");
}                 
printf("\n");    
}  
return 0;    
} 
