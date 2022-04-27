//本题要求实现符号函数sign(x)
#include <stdio.h>

int sign( int x );

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));
    
    return 0;
}

int sign( int x )
{
	int sign = -1;
	if(x > 0) sign = 1;
	else if(x == 0) sign = 0;
	
	return sign;
	
}
