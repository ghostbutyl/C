#include <stdio.h>
int main()
{
	int score = 87; //���Է���Ϊ87�� 
    
    switch(score)
    {
        /*�������´���Ϊʲô�����ַ�ʽ��
          ���ַ�ʽ�ĺô���*/
        case 10:
        case 9:
            printf("�ȼ�A");
            break;
        case 8:
            printf("�ȼ�B");
            break;                //�����ǲ���ȱ��ʲô��            
        case 7:
        case 6: 
            printf("�ȼ�C");
            break;                //�����ǲ���ȱ��ʲô��  
        default:
            printf("�ȼ�D");
            break;    
    }
    return 0;



}

