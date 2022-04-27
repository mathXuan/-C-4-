//本题要求实现一个函数，计算下列简单交错幂级数的部分和：
//f(x,n)=x - x2 + x3 - x4 + .....+ (-1)n-1xn

#include <stdio.h>

double fn( double x, int n );

int main()
{
    double x;
    int n;
    
    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));
    
    return 0;
}

/*没有用递归函数 
double fn( double x, int n )
{
	double sum = 0;
	int prime = 1;
	double every = 1;
	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j<= i; j++)
		{
			every *= x;
		}
		sum += every * prime;
		prime *= -1;
	}
	
	return sum;
}*/

double fn( double x, int n ){
    if(n>1){
        double m=-1;
        for(int i=0;i<n;i++){
            m=m*(-1);
            //cout<<m<<" ";
        }
        double answer=1;
        for(int j=0;j<n;j++){
            answer=answer*x;
        }
        n--;
        return m*answer+fn(x,n);
    }
    else{
        return x;
    }
}



