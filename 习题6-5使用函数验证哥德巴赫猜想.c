//����Ҫ��ʵ��һ���ж������ļ򵥺�����
//�����øú�����֤��°ͺղ��룺
//�κ�һ����С��6��ż�����ɱ�ʾΪ����������֮�͡���
//������ֻ�ܱ�1��������������������ע�⣺1����������2�������� 

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
/*������������ԭ������Ϊû�п���1,2
����������ֵ��ͬʱӦ�þ�������С��Χ 
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

/* ��ô�ж�һ�����ֽ���ĺͣ��Ƿ������� */
void Goldbach( int n )
{
	int max = n/2;
	for(int j = 2; j < n/2; j++)
	{
		if (prime(j) && prime(n-j))
		{
			printf("%d=%d+%d",n,j,n-j);
		//	break;//Ҫ������Ϊ�����ķֽⲻΨһ������24���Էֽ�Ϊ5+19�������Էֽ�Ϊ7+17����Ҫ�����������н���p��С�Ľ⡣ 
		//����break���������������Ŀ��� 
		 } 
	}
}
/* 
void Goldbach(int n) {
    int i, j, max;

    max = n / 2;
    for (i = 2; i <= max; i++) {
        j = n - i;
        if (prime(i) && prime(j)) { //ֱ����if�ж��Ƿ����������� 
            printf("%d=%d+%d", n, i, j);
            break;
        }
    }
}*/

