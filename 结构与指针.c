#include <stdio.h>

struct point {
	int x;
	int y;
};

void getStruct (struct point);
void output (struct point);

int main(int argc, char const *argv[])
{
	struct point y = {0,0};
	getStruct(y);
	output(y);
}
//�����鲻ͬ��ֻ��ֵ��û�иı�y�Ľṹ 
void getStruct(struct point p)//�������յ�y����ṹ������ֵ 
{
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%d,%d", p.x, p.y);//��Ȼ�����ֵ�ı䣬���Ƿ���ֵû�У������main������Ӧ����Ȼ���00 
}

void output(struct point p)
{
	printf("%d,%d",p.x, p.y); 
}

/*��Ϊ����Ĳ���ָ�� 
1.����һ����ʱ�Ľṹ��������������ṹ
struct getStruct (struct point);
y = getStruct(p)
2.���ṹָ����Ϊ����
struct date *p = &myday;
(*P).month = 12;
p->month = 12;*/ 
