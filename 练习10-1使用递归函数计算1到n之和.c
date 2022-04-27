//本题要求实现一个用递归计算1+2+3+…+n的和的简单函数。
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
