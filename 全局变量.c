#include <stdio.h>
/*argc 是 argument count的缩写，
表示argv这个二级指针指向的内存区域中保
存的由stub写入的有效命令行参数的个数.

argv 是 argument vector的缩写，
表示传入main函数的参数序列或指针，
并且第一个参数argv[0]一定是程序的名称，
并且包含了程序所在的完整路径，
所以确切的说需要输入的main函数的参数个数是argc-1个。
*/
int f(void);

int gAll = 12;//全局变量的访问，任何函数都会跟着变化 

int main(int argc, char const *argv[])
{
	printf("in %s gAll=%d\n", __func__, gAll);//使用__func__打印当前函数名称
	f();
	printf("agn in %s gAll=%d\n", __func__, gAll);
	return 0;
 } 
 
 int f(void)
 {
 	printf("in %s gAll=%d\n",__func__, gAll);
 	gAll += 2;
 	printf("agn in %s gAll=%d\n", __func__, gAll);
 	return gAll;
 }
