#include <stdio.h>
/*argc �� argument count����д��
��ʾargv�������ָ��ָ����ڴ������б�
�����stubд�����Ч�����в����ĸ���.

argv �� argument vector����д��
��ʾ����main�����Ĳ������л�ָ�룬
���ҵ�һ������argv[0]һ���ǳ�������ƣ�
���Ұ����˳������ڵ�����·����
����ȷ�е�˵��Ҫ�����main�����Ĳ���������argc-1����
*/
int f(void);

int gAll = 12;//ȫ�ֱ����ķ��ʣ��κκ���������ű仯 

int main(int argc, char const *argv[])
{
	printf("in %s gAll=%d\n", __func__, gAll);//ʹ��__func__��ӡ��ǰ��������
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
