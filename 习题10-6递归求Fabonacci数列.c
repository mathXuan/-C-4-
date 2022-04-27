//本题要求实现求Fabonacci数列项的函数。

#include <stdio.h>

int f( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    printf("%d\n", f(n));
    
    return 0;
}

int f( int n )
{
	int answer;
	if( n == 0)
	{
		answer = 0;
	}
	else if( n == 1)
	{
		answer = 1;
	}
	else
	{
		answer = f( n - 2) + f( n - 1);
	}
	
	return answer;
}


