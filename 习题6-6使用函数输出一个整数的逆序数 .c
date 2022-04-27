// 本题要求实现一个求整数的逆序数的简单函数
#include <stdio.h>

int reverse( int number );
    
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}
/*
int reverse( int number )
{
	int t = number;
	int answer = 0;
	while(t/10 > 0)
	{
		t = t%10 * 10;
	}
	if (t < 0) answer = -1*answer;
	
	return answer;
	
}*/

int reverse( int number )
{
	int t = 0;
	do
	{
		t = t * 10 + number % 10;
		number /= 10;
	}while(number != 0);
	return t;
}

