#include <stdio.h>
#include <string.h>
struct student{
	int num;
	char name[20];
	float score[3];
}stu;
void print(struct student stu)
{
	printf("%d\n",stu.num);
	printf("%s\n",stu.name);
	printf("%.2f\n",stu.score[0]);
	printf("%.2f\n",stu.score[1]);
	printf("%.2f\n",stu.score[2]);
}
int main()
{
	stu.num=8;
	strcpy(stu.name,"zhang san");
	stu.score[0]=49.4;
	stu.score[1]=94.4;
	stu.score[2]=85.5;
	print(stu);
}

