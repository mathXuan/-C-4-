//����Ҫ��ʵ�ֺ������n���ַ���������
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
/*����Ĵ�������Ϊû���������Ҫѭ���Ĳ���
1.������Ҫѭ��
2.�ո���Ҫѭ��
3.��ĸ��Ҫѭ�� 
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


