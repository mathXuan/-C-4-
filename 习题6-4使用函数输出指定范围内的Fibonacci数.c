/*����Ҫ��ʵ��һ������Fibonacci���ļ򵥺�����
��������ʵ����һ�������������������m��n��0<m��n��10000��֮
�������Fibonacci������νFibonacci���о�������
��һ��������ǰ����ĺͣ��ʼ���������Ϊ1�������С�
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

/*fib���������õݹ� 
int fib( int n )
{
	int a[100]={1,1};//��ʼ������Ҫ��= 
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
        return fib(n - 1) + fib(n - 2);//�����õ��˵ݹ�
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

    int i = 1, count = 0;//����һ������

    while (fib(i) <= n)//ע��fib���صĲ���0��1����ʼ��ϰ�ߵص���0��1д�����һ����Ϳ
    {
	// �Լ��㷨�еĴ��� 
        if (fib(i) >= m && fib(i) <= n)//�ڷ�Χ�� 
        {
            count++;
            if (count == 1)//ʹ�ø��������ƿո�
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

