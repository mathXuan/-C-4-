//����Ҫ��ʵ��һ����������һ���������а�λ˳�����
#include <stdio.h>

void printdigits( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    printdigits(n);

    return 0;
}

void printdigits( int n )
{
	int t = n;
	int a[20];
	int cnt = 0;
	int i = 0;
	do
	{ 
	    a[i] = t%10;
		t = t/10; 
		i++;	
	}while (t/10 > 0);
	
	for(i; i >= 0; i--)
	{
		printf("%d\n", a[i]);	
	}
}


