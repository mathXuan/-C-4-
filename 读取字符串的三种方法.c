# include <stdio.h>
/* ����gets���� 
ʹ�� gets() ʱ��ϵͳ�Ὣ����á���Enter���Ļ��з��ӻ�������ȡ������Ȼ���������Ի������в����������з���
��ʹ��scanfʱ�����ġ��á��������ڻ������У����ʹ��scanf������Ҫʹ��gerchar��������������Enter�Ե�
int main(void)
{
	char a[256] = {0};
	gets(a);//gets() �����Ĺ����Ǵ����뻺�����ж�ȡһ���ַ����洢���ַ�ָ����� str ��ָ����ڴ�ռ�
	printf("%s",a);
    return 0;
}*/
/* ����getchar������������ʽ��ȡ�ַ��� 
int main(void)
{
	int i=0;
	int j;
	char ch;
	char a[256] = {0};
	while((ch=getchar())!='\n')//һֱ���ջ��������ַ���ֱ���յ��س�
	{
	   	a[i]=ch;
	   	i++;
	}
	a[i]='\0';    //���ϴ�β��
	for(j=0;j<i;j++)
	{
		printf("%c",a[j]);
	}
    return 0;
}*/

//������ʽ
//scanf���ָ�ʽ�����ܽ��մ��ո���ַ�������������"abc 123 678"�Ļ����ַ���ֻ����յ�abc�����ո�ͽ��� 
int main(void)
{
	char a[256];
	scanf("%s",&a);
	printf("%s",a);
    return 0;
}



