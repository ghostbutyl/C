#include <stdio.h>
main()
{
\	int a,b,c,sum;
	float aver;
	printf("%d,%d,%d",a,b,c);
	scanf("%d,%d,%d",&a,&b,&c);
	sum=a+b+c;
	aver=sum/3.0;
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	printf("sum=%d,aver=%6.2f\n",sum,aver);
}
