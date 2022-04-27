# include <stdio.h>
/* 利用gets函数 
使用 gets() 时，系统会将最后“敲”（Enter）的换行符从缓冲区中取出来，然后丢弃，所以缓冲区中不会遗留换行符；
而使用scanf时，最后的“敲”会遗留在缓冲区中，如果使用scanf，则需要使用gerchar（）将缓冲区的Enter吃掉
int main(void)
{
	char a[256] = {0};
	gets(a);//gets() 函数的功能是从输入缓冲区中读取一个字符串存储到字符指针变量 str 所指向的内存空间
	printf("%s",a);
    return 0;
}*/
/* 利用getchar函数，数组形式读取字符串 
int main(void)
{
	int i=0;
	int j;
	char ch;
	char a[256] = {0};
	while((ch=getchar())!='\n')//一直接收缓冲区的字符。直至收到回车
	{
	   	a[i]=ch;
	   	i++;
	}
	a[i]='\0';    //加上串尾符
	for(j=0;j<i;j++)
	{
		printf("%c",a[j]);
	}
    return 0;
}*/

//数组形式
//scanf这种格式串不能接收带空格的字符串，比如输入"abc 123 678"的话，字符串只会接收到abc，遇空格就结束 
int main(void)
{
	char a[256];
	scanf("%s",&a);
	printf("%s",a);
    return 0;
}



