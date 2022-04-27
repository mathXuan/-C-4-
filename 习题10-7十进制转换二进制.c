//本题要求实现一个函数，将非负整数n转换为二进制后输出。

#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    dectobin(n);
    
    return 0;
}

//在实现模2取余后需要逆序输出，这个地方通过不断乘以10
//来实现后一位比前一位的位数多10，不需要再通过数组或者
//逆序函数来实现
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


