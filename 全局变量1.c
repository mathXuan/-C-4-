#include <stdio.h>

int f(void);

int gAll = 12;
//ȫ�ֱ�������=����ֵ��Ҳ���ܴ��ݣ�����һ��ȫ�ֱ�����ϵ��һ�� 

int main(int argc, char const *argv[])
{
	f();
	return 0;
 } 
 
 int f(void)
 {
 	int k = 0;
 	static int all = 1;
 	//�����ַ
	 //֤��gall��all����������һ�𣬱��ر����;�̬���ر���û�з���һ�� 
 	printf("&gAll = %p\n",&gAll);
 	printf("&all = %p\n",&all);
 	printf("&k = %p\n",&k);
 	printf("in %s all=%d\n",__func__, all);
 	all +=2;
 	printf("agn in %s all= %p\n",__func__, all);
 	return all;
 	
  } 
