#include <stdio.h>
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    int sum=0;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           if(i==j)
            printf("[%d][%d]=%d",i,j,arr[i][j]);
            sum+=arr[i][j];
            
       }
       
       
       
       
       
    }
    printf("对角线元素之和是：%d\n",sum);
    return 0;    
}
