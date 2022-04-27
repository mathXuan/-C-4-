#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	
	int i = m;
	int sum = 0;
	for(i; i <= n; i++)
	{
		sum += i;
	}
	
	printf("sum = %d", sum);
	return 0;
}
