//����Ҫ��ʵ��һ�������������Ӻ͵ļ򵥺�����
//��������ʵ����һ�������������������m��n��0<m��n��10000��
//֮���������������ν�������Ǹ���ǡ�õ��ڳ������������֮�͡�
//���磺6=1+2+3������1��2��3Ϊ6�����ӡ�
#include <stdio.h>

int factorsum( int number);
void printpn(int m, int n);

int main()
{
	int m,n;
	scanf("%d %d", &m,&n);
	
	if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    printpn(m, n);
	
	return 0;
}

int factorsum( int number)
{
	int sum = 0;
	for( int j = 1; j < number; j++)
	{
		if(number%j == 0){
			sum +=j;
		}
	}
	return sum;
}

void printpn(int m, int n)
{
	int a[100];
	int factor = 1;
	int t=0;  //������¼��������������
	//Ӧ�ô���ѧ�ᣬ��������е�ÿ���������
	
	for(; m<=n; m++)
	{
		//�㷨˼�����ƣ������ȼ򵥵��ж��Ƿ��������ٽ�һ����� 
		if(factorsum(m)==m) 
		{
			int k = 0;//������������˳��ش�������a
			for(int i = 1; i < m; i++)
			{
				if(m%i ==0)
				{
					a[k] = i;
					k++;
				}
			 } 
			t++;//��¼һ������
			//���
            printf("%d =",m);
            for(int j = 0; j< k; j++)//���һ�п������������Ψһ��������Ǻ�����û��+ 
            {
            	if(j < k-1) printf("%d +",a[j]);
            	else if(j=k-1)  printf(" %d",a[j]);
			}
			printf("\n");
		}	 
	}
	if(t==0) printf("No perfect number");//�ж���������������
}



