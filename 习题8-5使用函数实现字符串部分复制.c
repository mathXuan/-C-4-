//����Ҫ���д�������������ַ���t�дӵ�m���ַ�
//��ʼ��ȫ���ַ����Ƶ��ַ���s�С� 

#include <stdio.h>
#include <string.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    
    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

void strmcpy( char *t, int m, char *s )
{

	int n=strlen(t);
    for(int i=0;i<=n-m+1;i++)
    {
    	if(t[m+i-1]=='\0') s[i]='\0';
		s[i]=t[m+i-1];
	}
}

void ReadString( char s[] )
{
	gets(s);
}
