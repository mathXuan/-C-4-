//本题要求实现一个函数，用下列公式求cos(x)的近似值，精确到最后一项的绝对值小于e：
#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    
    return 0;
}
/*
首先说明一下“精确到最后一项的绝对值小于e”
这句话的意思就是我们在cos的计算时，
每一项的绝对值需要比这个e大，直到最后一项的绝对值比e小。
*/

double funcos( double e, double x )
{
	double sum = 1;
	double denominator = 1;//分母 
	double numerator = x;//分子 
	int prime = -1;
	double every_number = 1;
	double judge = every_number;
	int i = 2;
	if(x>0);
	else x = -x;
	
	if(judge < e);
	else
	{
		
		while (judge > e)
		{
			for(int j = 1; j <= i; j++ )
			{
				denominator = denominator * j;
			//	numerator *= numerator;
				/*计算阶乘 
				denominator *= denominator;
				denominator ++;*/
			} 
			numerator = pow(x,i);
			every_number = numerator/denominator * prime;
			sum = sum + every_number;
			i += 2;
			prime = -1 * prime; 
			denominator = 1; //错误的原因就是因为没有把分子变回来，每次循环后都应该重新计算 
			
			if(every_number > 0 ) judge = every_number;
			else judge = -1 * every_number;
		}
    }
	
	return sum;
} 


/*第一次尝试失败 
double funcos( double e, double x )
{
	double sum = 1;
	while( sum >= e)
	{
		int cnt = 2;
		int prime = -1;
		int drime = 0; //表示分母 
		for(int i = 0; i < cnt ; i++)
		{
			x *= x;
		}
		int every_drime = 1;
		for(int j = 1 ; j <= cnt; j++)
		{
			every_drime *= j; 
			drime += every_drime; 
		}
		sum += x/drime * prime;
	
		cnt += 2;
		prime *= -1;
	}
	
	return sum;
}*/

/* 

double funcos( double e, double x )
{
double funcos(double e, double x)
{
	int temp = -1;//字节小的变量放在前面，减少时间
	double item = 1, m = 2, sum = 1;
	double fenmu = 1, fenzi=1;
	while (item > e)
	{
		for (int i = 1;i <= m;i++){
			fenmu =fenmu* i;
		}
		fenzi = pow(x, m);//也可以使用循环来实现
		item = fenzi / fenmu;
		sum = sum + temp * item;
		m = m + 2;
		fenmu = 1;
		temp = -temp;
	} 
	return sum;
}*/

