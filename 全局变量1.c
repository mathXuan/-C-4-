#include <stdio.h>

int f(void);

int gAll = 12;
//全局变量不能=函数值，也不能传递（和另一个全局变量联系到一起） 

int main(int argc, char const *argv[])
{
	f();
	return 0;
 } 
 
 int f(void)
 {
 	int k = 0;
 	static int all = 1;
 	//输出地址
	 //证明gall和all两个连接在一起，本地变量和静态本地变量没有放在一起 
 	printf("&gAll = %p\n",&gAll);
 	printf("&all = %p\n",&all);
 	printf("&k = %p\n",&k);
 	printf("in %s all=%d\n",__func__, all);
 	all +=2;
 	printf("agn in %s all= %p\n",__func__, all);
 	return all;
 	
  } 
