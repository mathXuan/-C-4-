//����Ҫ��ʵ��һ�����������Ǹ�����nת��Ϊ�����ƺ������

#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    dectobin(n);
    
    return 0;
}

//��ʵ��ģ2ȡ�����Ҫ�������������ط�ͨ�����ϳ���10
//��ʵ�ֺ�һλ��ǰһλ��λ����10������Ҫ��ͨ���������
//��������ʵ��
void dectobin( int n ){
    int result=0,k=1,i,temp;
    temp = n;
    while(temp){
        i = temp%2;
        result = k * i + result;
        k = k*10;
        temp = temp/2;
    }
    printf("%d\n", result);
}


