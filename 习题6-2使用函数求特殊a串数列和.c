//给定两个均不超过9的正整数a和n，要求编写函数求a+aa+aaa++?+aa?a（n个a）之和。
#include <stdio.h>

int fn(int a, int n);
int suma(int a, int n);

int main()
{
	int a,n;
	scanf("%d %d", &a, &n);
	int sum;
	int last_number;
	//suma(a,n);注意 函数中的数值有区域限制，输出应该直接写出函数 
	
	printf("fn(%d,%d)=%d\n", a, n, fn(a,n));
	printf("s=%d", suma(a,n));
	
	return 0;
 } 
 
 
int fn(int a, int n)
{
	int last_number = a;
	for(int i = 1; i < n; i++)
	{
		last_number = last_number * 10 + a;
	}

	return last_number;
}

int suma(int a, int n)
{
	int sum = a;
	int last_number = a;
	for(int i = 1; i < n; i++)
	{
		last_number = last_number * 10 + a;
		sum += last_number;
	}
	
	return sum;
}
