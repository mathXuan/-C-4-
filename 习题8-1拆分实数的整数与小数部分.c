//本题要求实现一个拆分实数的整数与小数部分的简单函数。
#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart );

int main()
{
    float x, fracpart;
    int intpart;
    
    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);
    
    return 0;
}

void splitfloat( float x, int *intpart, float *fracpart )
{
	float number = x;
	*intpart = number/1;
	*fracpart = x - *intpart;
	
}
