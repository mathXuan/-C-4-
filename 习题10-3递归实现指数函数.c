//本题要求实现一个计算xn(n≥1）的函数。
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
