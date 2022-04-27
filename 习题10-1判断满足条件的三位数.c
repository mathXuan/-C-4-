 //本题要求实现一个函数，统计给定区间内的三位数中
 //有两位数字相同的完全平方数（如144、676）的个数。
 
 #include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
        
    return 0;
}

/*错误原因是因为只考虑三位数即可 
int search( int n )
{
	int count = 0;
	for(int i = 101; i <= n; i++)
	{
		int number = i;
		int t = number; 
		int j = 0;
		int b[10];
		do{
			b[j] = t/10;//求一个数 
			j++;
			number %= 10;
		}while (number%10 > 0);
		
		if(b[0] == b[1] || b[0] == b[2] || b[1] == b[2])
			{
				count++;
			}
	}
	return count;
}	*/

int search( int n )
{
    int d1, d2, d3, count = 0;
    int i, j;

    for (i = 101; i <= n; i++)//遍历每一个数 
    {
        for (j = 11; j * j < i; j++);//从最小的平方数开始，取出j 
        if (j * j == i)
        {
            d1 = i / 100;   //取出百位
            d2 = i / 10 % 10;  // 十位
            d3 = i % 10;   // 个位
            if (d1 == d2 && d1 == d3);// 三位数相同时跳过
                
            else if (d1 == d2 || d1 == d3 || d2 == d3) //两位数相同时
                count++;
        }
    }

    return count;
}
	
