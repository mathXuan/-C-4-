//本题要求实现Ackermenn函数的计算，其函数定义如下：

 #include <stdio.h>

int Ack( int m, int n );

int main()
{
    int m, n;
    
    scanf("%d %d", &m, &n);
    printf("%d\n", Ack(m, n));
    
    return 0;
}

int Ack( int m, int n )
{
	int ack;
	if(m == 0)
	{
		ack = n + 1; 
	}
	else if(n == 0 && m > 0)
	{
		ack = Ack(m-1, 1);
	}
	else
	{
		n = Ack(m, n-1);
		ack = Ack(m-1, n);
	}
	
	return ack;
}
