//用 static修 饰 的 静态变量
#include <stdio.h>
void fn()
{
	static int x=0;
	x++;
	printf("fn:x=%d\n",x);
	
}
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		fn();
	}
	return 0;
}

