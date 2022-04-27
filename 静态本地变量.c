#include <stdio.h>
//在本地变量定义时加上static，本地变量变成静态本地变量
//函数离开，静态本地变量会继续存在并保持之前离开的值 
int f(void);

int gAll = 12;

int main(int argc, char const *argv[])
{
	f();
	f();
	f();
	return 0;
 } 
 
 int f(void)
 {
 	//int all = 1;本地变量 
 	static int all = 1;//静态本地变量 
 	printf("in %s gAll=%d\n",__func__, all);
 	all += 2;
 	printf("agn in %s gAll=%d\n", __func__, all);
 	return all;
 }
