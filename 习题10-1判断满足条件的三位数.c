 //����Ҫ��ʵ��һ��������ͳ�Ƹ��������ڵ���λ����
 //����λ������ͬ����ȫƽ��������144��676���ĸ�����
 
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

/*����ԭ������Ϊֻ������λ������ 
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
			b[j] = t/10;//��һ���� 
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

    for (i = 101; i <= n; i++)//����ÿһ���� 
    {
        for (j = 11; j * j < i; j++);//����С��ƽ������ʼ��ȡ��j 
        if (j * j == i)
        {
            d1 = i / 100;   //ȡ����λ
            d2 = i / 10 % 10;  // ʮλ
            d3 = i % 10;   // ��λ
            if (d1 == d2 && d1 == d3);// ��λ����ͬʱ����
                
            else if (d1 == d2 || d1 == d3 || d2 == d3) //��λ����ͬʱ
                count++;
        }
    }

    return count;
}
	
