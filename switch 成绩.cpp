#include <stdio.h>
int main()
{
	int score = 87; //考试分数为87分 
    
    switch(score)
    {
        /*想想以下代码为什么用这种方式；
          这种方式的好处？*/
        case 10:
        case 9:
            printf("等级A");
            break;
        case 8:
            printf("等级B");
            break;                //这里是不是缺点什么？            
        case 7:
        case 6: 
            printf("等级C");
            break;                //这里是不是缺点什么？  
        default:
            printf("等级D");
            break;    
    }
    return 0;



}

