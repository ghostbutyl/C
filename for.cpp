#include <stdio.h>
int main() 
{ 
   int i,j,sum;
   for(i=1;i<10;i++)
   {
   		for(j=9;j>=1;j--)
   		{
		   	sum=j*i;
   			printf("%d*%d=%d\t",i,j,sum);
   		}
   }
    
    
    
   
}
