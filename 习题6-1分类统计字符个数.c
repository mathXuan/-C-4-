//����Ҫ��ʵ��һ��������ͳ�Ƹ����ַ�����Ӣ����ĸ���ո��س��������ַ��������ַ��ĸ�����
#include <stdio.h>
#include<stdlib.h>//�����ַ���Ҫ���õĿ� 

void stringcount( char a[], int cnt);
int main()
{
	int i = 0;
	char ch;
	char a[256] = {0};
	int cnt = 0;
	while((ch=getchar())!='\n')
		{
		   	a[i]=ch;
		   	i++;
		}
		cnt = i;
		a[i]='\0';    //���ϴ�β��
	//�Լ��Ĵ���
	//stringcount(a[i], cnt);�������β�������ʱ��������β�Ӧ����������������Ӧ������:a[10],��������ľ���a�ĵ�ʮ�����ݡ�
	stringcount(a, cnt);
	
	return 0;
}

void stringcount( char a[], int cnt)
{
	int letter = 0;
	int blank = 0;
	int digit = 0;
	int other = 0;
	
	int i = 0;
	for( i ; i < cnt; i++)
	{
		if((a[i] <= 'z' && a[i] >= 'a') || (a[i] <= 'Z' && a[i] >= 'A')){
			letter++;
		}else if(a[i] == ' '){
			blank++;
		}else if(a[i] <= '9' && a[i] >= '0'){
			digit++;
		}else{
			other++;
		}
	}
	
	printf("letter=%d,blank=%d,digit=%d,other=%d", letter,blank,digit,other);
	
}

/*�������飬ֻ�����ַ�������Ҳ���Խ����ַ�������ͳ�� 
{
    char c;
    int  letters_num = 0, space_num = 0, digit_num = 0, other_num = 0;
    while ((c = getchar()) != '\n')//���뻻�з��˳�ѭ��
    {
        if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z')) letters_num++;
        else if (c == ' ') space_num++;
        else if (c >= '0'&&c <= '9') digit_num++;
        else other_num++;
    }
    printf("��ĸ=%d���ո�=%d������=%d������=%d", letters_num, space_num, digit_num, other_num);
    return 0;
}
*/

