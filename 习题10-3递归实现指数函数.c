//����Ҫ��ʵ��һ������xn(n��1���ĺ�����
#include <stdio.h>

double calc_pow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}

double calc_pow( double x, int n )
{
	double result = 1;
	for(n; n > 0; n--)
	{
		result *= x;
	}
	
	return result;
}
