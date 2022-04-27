//本题要求实现一个计算整数因子和的简单函数，
//并利用其实现另一个函数，输出两正整数m和n（0<m≤n≤10000）
//之间的所有完数。所谓完数就是该数恰好等于除自身外的因子之和。
//例如：6=1+2+3，其中1、2、3为6的因子。
#include <stdio.h>

int factorsum( int number);
void printpn(int m, int n);

int main()
{
	int m,n;
	scanf("%d %d", &m,&n);
	
	if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    printpn(m, n);
	
	return 0;
}

int factorsum( int number)
{
	int sum = 0;
	for( int j = 1; j < number; j++)
	{
		if(number%j == 0){
			sum +=j;
		}
	}
	return sum;
}

void printpn(int m, int n)
{
	int a[100];
	int factor = 1;
	int t=0;  //用来记录区间内完数个数
	//应该从中学会，如何数组中的每个数都输出
	
	for(; m<=n; m++)
	{
		//算法思考限制，可以先简单的判断是否是完数再进一步输出 
		if(factorsum(m)==m) 
		{
			int k = 0;//用来把因子有顺序地存入数组a
			for(int i = 1; i < m; i++)
			{
				if(m%i ==0)
				{
					a[k] = i;
					k++;
				}
			 } 
			t++;//记录一个完数
			//输出
            printf("%d =",m);
            for(int j = 0; j< k; j++)//输出一行可以慢慢输出，唯一的区别就是后面有没有+ 
            {
            	if(j < k-1) printf("%d +",a[j]);
            	else if(j=k-1)  printf(" %d",a[j]);
			}
			printf("\n");
		}	 
	}
	if(t==0) printf("No perfect number");//判断区间内有无完数
}



