#include <stdio.h>
int main()
{
	int m, n;
    for(m=2; m<=50; m++)
    {
		for(n=2; n<m; n++)
        {
            if(    ？    )       //什么条件下跳出当前循环
              ？                 //这里应该退出当前循环了
		}	
        if(m == n)   //n循环结束后，如果m=n的话就输出m
            printf("%d  ", m);
	}
	return 0; 



}

