/*本题要求实现一个计算Fibonacci数的简单函数，
并利用其实现另一个函数，输出两正整数m和n（0<m≤n≤10000）之
间的所有Fibonacci数。所谓Fibonacci数列就是满足
任一项数字是前两项的和（最开始两项均定义为1）的数列。
*/
#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
    
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/*fib函数可以用递归 
int fib( int n )
{
	int a[100]={1,1};//初始化数组要有= 
	int i = 2;
	for(i; i <= n; i++)
	{
		a[i] = a[0] + a[1];
	}
	
	return a[i];
}*/

int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);//这里用到了递归
}



/*
void PrintFN( int m, int n )
{
	int cnt = 0;
	int j = m;
	for( j; j <= n; j++)
	{
		if(j == 1) printf(" %d", j);
		else{
		for(int i = 2; i <=j; i++)
		{
			if(j == fib(i)) break;
		}
		}
	}
	if(cnt == 0) printf(" %d", j);
	else printf("No Fibonacci number\n");
	
}*/

void PrintFN(int m, int n)
{

    int i = 1, count = 0;//定义一个个数

    while (fib(i) <= n)//注意fib返回的不是0和1，开始我习惯地当成0，1写，错的一塌糊涂
    {
	// 自己算法中的错误， 
        if (fib(i) >= m && fib(i) <= n)//在范围内 
        {
            count++;
            if (count == 1)//使用个数来控制空格
                printf("%d", fib(i));
            else
                printf(" %d", fib(i));
        }
        i++;
    }
    if (count == 0)
    {
        printf("No Fibonacci number\n");
    }
}

