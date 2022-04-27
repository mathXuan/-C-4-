//本题要求编写函数，将输入字符串t中从第m个字符
//开始的全部字符复制到字符串s中。 

#include <stdio.h>
#include <string.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

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
