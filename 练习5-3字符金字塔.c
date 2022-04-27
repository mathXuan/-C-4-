//本题要求实现函数输出n行字符金字塔。
#include <stdio.h>

void CharPyramid( int n, char ch );

int main()
{    
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);
    
    return 0;
}
/*这里的错误是因为没有算清楚需要循环的部分
1.行数需要循环
2.空格需要循环
3.字母需要循环 
void CharPyramid( int n, char ch)
{
	for(int i = n-1; i >=0; i--)
	{
		printf(" ");
		for(int j = 1; j <= i; j++)
		{
			printf("%c ", ch);
		}
		printf("\n");
	}
}*/

void CharPyramid( int n, char ch)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int m=1;m<=i;m++)
		printf("%c ",ch);
		printf("\n"); 
	}
}


