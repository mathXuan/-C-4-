/*
����Ҫ���д�������жϸ�����һ����
���Ƿ�Ϊ�����ġ�����ν�����ġ�
��ָ˳���͵�����һ�����ַ�����
�硰XYZYX���͡�xyzzyx�����ǻ��ġ�
*/
#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];
    
    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome( char *s )
{
	int length = strlen(s);
	char s1[MAXN];
	for(int i = 0; i < length; i++)
	{
		s1[i] = s[length - i];
	}
	
	int prime = 0;
	for(int j = 0; j < length; j++)
	{
		if(s1[j] != s[j])
		    prime = 1;
	}
	
	return prime;
}
