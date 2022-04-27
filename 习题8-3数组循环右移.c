/*本题要求实现一个对数组进行循环右移的简单函数：
一个数组a中存有n（>0）个整数，将每个整数循环向
右移m（≥0）个位置，即最后m个数循环移至最前面的m个位置*/

#include <stdio.h>
#define MAXN 10

void ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
    
    ArrayShift(a, n, m);
    
    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
}

void ArrayShift( int a[], int n, int m )
{
	int b[100];
	for(int j = 0; j < n; j++)
	{
		b[j] = a[j];
	}
	for(int i = 0; i < m; i++)
	{
		a[i] = b[n-m+i];
	}
/*	错误原因是因为循环角坐标应该一个一个算一下 
    for(int i = m; i <= n - m; i++)
	{
		a[i + m] = b[i];
	}*/
	for(int i=0;i<n-m;i++)
	{
		a[i+m]=b[i];
	}
	
}


