#include <stdio.h>
//�ڱ��ر�������ʱ����static�����ر�����ɾ�̬���ر���
//�����뿪����̬���ر�����������ڲ�����֮ǰ�뿪��ֵ 
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
 	//int all = 1;���ر��� 
 	static int all = 1;//��̬���ر��� 
 	printf("in %s gAll=%d\n",__func__, all);
 	all += 2;
 	printf("agn in %s gAll=%d\n", __func__, all);
 	return all;
 }
