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
//和数组不同，只有值，没有改变y的结构 
void getStruct(struct point p)//参数接收到y这个结构变量的值 
{
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%d,%d", p.x, p.y);//虽然输入的值改变，但是返回值没有，因此在main函数中应该仍然输出00 
}

void output(struct point p)
{
	printf("%d,%d",p.x, p.y); 
}

/*因为传入的不是指针 
1.创建一个临时的结构变量，返回这个结构
struct getStruct (struct point);
y = getStruct(p)
2.将结构指针作为参数
struct date *p = &myday;
(*P).month = 12;
p->month = 12;*/ 
