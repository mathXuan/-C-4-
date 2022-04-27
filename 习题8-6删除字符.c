//本题要求实现一个删除字符串中的指定字符的简单函数。
#include <stdio.h>
#include <string.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

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

