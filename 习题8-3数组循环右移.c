/*����Ҫ��ʵ��һ�����������ѭ�����Ƶļ򵥺�����
һ������a�д���n��>0������������ÿ������ѭ����
����m����0����λ�ã������m����ѭ��������ǰ���m��λ��*/

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
/*	����ԭ������Ϊѭ��������Ӧ��һ��һ����һ�� 
    for(int i = m; i <= n - m; i++)
	{
		a[i + m] = b[i];
	}*/
	for(int i=0;i<n-m;i++)
	{
		a[i+m]=b[i];
	}
	
}


