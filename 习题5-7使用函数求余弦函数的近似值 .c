//����Ҫ��ʵ��һ�������������й�ʽ��cos(x)�Ľ���ֵ����ȷ�����һ��ľ���ֵС��e��
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
����˵��һ�¡���ȷ�����һ��ľ���ֵС��e��
��仰����˼����������cos�ļ���ʱ��
ÿһ��ľ���ֵ��Ҫ�����e��ֱ�����һ��ľ���ֵ��eС��
*/

double funcos( double e, double x )
{
	double sum = 1;
	double denominator = 1;//��ĸ 
	double numerator = x;//���� 
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
				/*����׳� 
				denominator *= denominator;
				denominator ++;*/
			} 
			numerator = pow(x,i);
			every_number = numerator/denominator * prime;
			sum = sum + every_number;
			i += 2;
			prime = -1 * prime; 
			denominator = 1; //�����ԭ�������Ϊû�аѷ��ӱ������ÿ��ѭ����Ӧ�����¼��� 
			
			if(every_number > 0 ) judge = every_number;
			else judge = -1 * every_number;
		}
    }
	
	return sum;
} 


/*��һ�γ���ʧ�� 
double funcos( double e, double x )
{
	double sum = 1;
	while( sum >= e)
	{
		int cnt = 2;
		int prime = -1;
		int drime = 0; //��ʾ��ĸ 
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
	int temp = -1;//�ֽ�С�ı�������ǰ�棬����ʱ��
	double item = 1, m = 2, sum = 1;
	double fenmu = 1, fenzi=1;
	while (item > e)
	{
		for (int i = 1;i <= m;i++){
			fenmu =fenmu* i;
		}
		fenzi = pow(x, m);//Ҳ����ʹ��ѭ����ʵ��
		item = fenzi / fenmu;
		sum = sum + temp * item;
		m = m + 2;
		fenmu = 1;
		temp = -temp;
	} 
	return sum;
}*/

