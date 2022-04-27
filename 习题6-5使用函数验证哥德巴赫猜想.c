//本题要求实现一个判断素数的简单函数，
//并利用该函数验证哥德巴赫猜想：
//任何一个不小于6的偶数均可表示为两个奇素数之和。素
//数就是只能被1和自身整除的正整数。注意：1不是素数，2是素数。 

#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );
    
int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}
/*求素数，错误原因是因为没有考虑1,2
这两种特殊值，同时应该尽可能缩小范围 
int prime( int p )
{
	int prime = 1;
	for(int i = 1; i < p; i++)
	{
		if(p%i == 0)
		{
			prime = 0;
		    break;
		}
	}
	return prime;
}*/

int prime(int p) {
    int max;

    if (p <= 1) {
        return 0;
    }
    max = sqrt(p);
    for (int i = 2; i <= max; i++) {
        if (p%i == 0) {
            return 0;
        }
    }

    return 1;
}

/* 怎么判断一个数分解出的和，是否是素数 */
void Goldbach( int n )
{
	int max = n/2;
	for(int j = 2; j < n/2; j++)
	{
		if (prime(j) && prime(n-j))
		{
			printf("%d=%d+%d",n,j,n-j);
		//	break;//要求：又因为这样的分解不唯一（例如24可以分解为5+19，还可以分解为7+17），要求必须输出所有解中p最小的解。 
		//不加break则会输出所有素数的可能 
		 } 
	}
}
/* 
void Goldbach(int n) {
    int i, j, max;

    max = n / 2;
    for (i = 2; i <= max; i++) {
        j = n - i;
        if (prime(i) && prime(j)) { //直接用if判断是否是素数即可 
            printf("%d=%d+%d", n, i, j);
            break;
        }
    }
}*/

