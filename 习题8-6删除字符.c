//����Ҫ��ʵ��һ��ɾ���ַ����е�ָ���ַ��ļ򵥺�����
#include <stdio.h>
#include <string.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);
    
    return 0;
}

void delchar( char *str, char c )
{
	int length = strlen(str);
	char str1[MAXN];
	int j = 0;
	for(int i = 0; i < length; i++)
	{
		if(str[i] != c)
		{
			str1[j] = str[i];
			j++;
		}
	}
	
	char str2[MAXN];
	for(int k = 0; k < length; k++)
	{
		str2[k] = str[k];
		str[k] = str1[k];
	}
}

void ReadString( char s[] )
{
	gets(s);
}

