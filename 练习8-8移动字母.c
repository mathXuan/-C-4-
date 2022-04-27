//本题要求编写函数，将输入字符串的前3个字符移到最后。
#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);
	
    return 0; 
}


void Shift( char s[] )
{
    int k = strlen(s);
    char a[MAXS];
    for(int i=3;i<k;i++)
    	a[i-3] = s[i];
    for(int i=2;i>=0;i--)
    	a[k-i-1]=s[2-i];
    for(int i=0;i<k;i++)
        s[i] = a[i];
}
