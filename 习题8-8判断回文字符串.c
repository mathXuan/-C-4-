/*
本题要求编写函数，判断给定的一串字
符是否为“回文”。所谓“回文”
是指顺读和倒读都一样的字符串。
如“XYZYX”和“xyzzyx”都是回文。
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
