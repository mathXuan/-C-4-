//����������������9��������a��n��Ҫ���д������a+aa+aaa++?+aa?a��n��a��֮�͡�
#include <stdio.h>

int fn(int a, int n);
int suma(int a, int n);

int main()
{
	int a,n;
	scanf("%d %d", &a, &n);
	int sum;
	int last_number;
	//suma(a,n);ע�� �����е���ֵ���������ƣ����Ӧ��ֱ��д������ 
	
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
