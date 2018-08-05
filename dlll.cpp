#include <stdio.h>
void chang(int a,int b)
{
	int tep=a;
	a=b;
	b=tep;
}
int main()
{
	int a=5;
	int b=3;
	chang(a,b);
	printf("a=%d b=%d",a,b);



}

