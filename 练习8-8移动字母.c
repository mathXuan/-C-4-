//����Ҫ���д�������������ַ�����ǰ3���ַ��Ƶ����
#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* ʵ��ϸ���ڴ˲��� */

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
