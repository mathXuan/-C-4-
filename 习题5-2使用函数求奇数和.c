//本题要求实现一个函数，计算N个整数中所有奇数的和，
//同时实现一个判断奇偶性的函数。
#include <stdio.h>

#define MAXN 10

int even( int n );
int OddSum( int List[], int N );

int main()
{    
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for ( i=0; i<N; i++ ) {
        scanf("%d", &List[i]);
        if ( even(List[i])==0 )
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));
    
    return 0;
}

int even( int n )
{
	int even = 0;
	if(n%2 == 0) even = 1;
	
	return even;
}

int OddSum( int List[], int N )
{
	int sum = 0;
	for(int i = 0; i < N; i++)
	{
		if(even(List[i]) == 0)
		sum += List[i];
	}
	
	return sum;
}

