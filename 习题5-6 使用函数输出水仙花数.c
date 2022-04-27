#include <stdio.h>
#include <math.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/*
int narcissistic( int number )
{
	int cnt = 0;
	int t1 = number;
	int t2 = number;
	int a[] = {};
	int i = 0;
	do
	{
		cnt++;
		a[i] = t2/10;
		t2 = t2%10;
		i++;
	}while (t2 > 0);
	
	int judge;
	for(int j = 0; j < i+1; j++)
	{
		judge += pow( a[j], cnt);
	}
	
	if(number == judge)
	   return 1;
	else
	   return 0; 
}

void PrintN( int m, int n )
{
	for( int i = m; i <= n; i++)
	{
		if(narcissistic(i) == 1)
		   printf("%d\n", i);
	}
}*/

int narcissistic( int number )

{
    int sum=0,number1,count =0 , a;

    number1=number;
   //计算一共有多少位数 
    while(number1>0)
    {   count++;
        number1=number1/10;
    }

    number1=number;
    int i;

    while(number1>0)
    {
        a=number1%10;
        int c=1;
        for(i=0;i<count;i++) //计算水仙数的时候不需要用数学公式，利用循环即可 
            c=c*a;
        sum=sum+c;
        number1=number1/10;
    }


    if(sum==number)
        return 1;
    else
        return 0;

}

void PrintN( int m, int n )

{
    int i;
    for(i=m+1;i<n;i++)
    {
        if(narcissistic(i)==1)
            printf("%d\n",i);
    }
}
