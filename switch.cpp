#include <stdio.h>
main()
{
	int score,t;
	char g;
	printf("请输入成绩：");
	scanf("%d",&score);
	if(score>100||score<0)
		printf("输入有误；");
	else
	{
		t=score/10;
		switch(t)
		{
			case 10:
			case 9:g='A' ;break;
			case 8:g='B';break;
			case 7:g='C';break;
			case 6:g='D';break;
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:g='E';break;
		}
		printf("score:%d,grade=%c\n",score,g);
	}


}

