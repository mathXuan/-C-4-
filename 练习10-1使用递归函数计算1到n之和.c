//����Ҫ��ʵ��һ���õݹ����1+2+3+��+n�ĺ͵ļ򵥺�����
#include <stdio.h>

int sum( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}

int sum( int n )
{
    int count;
	if (n <= 0)
		{
			count = 0;
		}
	else 
		{
			count = n + sum(n-1);
		}
	return count;

}
