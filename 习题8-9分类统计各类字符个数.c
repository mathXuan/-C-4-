//����Ҫ��ʵ��һ��������ͳ�Ƹ����ַ����еĴ�д��ĸ��Сд��ĸ���ո������Լ������ַ����ж��١�
#include <stdio.h>
#include <string.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void ReadString( char *s )
{
	gets(s);
}

void StringCount( char s[] )
{
	int i=0;
	int letter=0,blank=0,digit=0,other=0;
	while(s[i])
	{
		if(s[i]>64 && s[i]<91 || s[i]>96 && s[i]<123)
			letter++;
		else if(s[i] == ' ' || s[i] == '\n')         //����һ���Ϊelse if ( s[i] == 32  ||  s[i] == 13 )�𰸻����
			blank++;
		else if(s[i]>47 && s[i]<58)
			digit++;
		else
			other++;
		i++;
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
} 

 
