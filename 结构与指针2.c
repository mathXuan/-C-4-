#include <stdio.h>

struct point{
	int x;
	int y;
};

struct point* getStruct(struct point*);
void output(struct point);
void print(const struct point *p);

int main(int argc, char const *argv[])
{
	struct point y = {0,0};
	getStruct(&y);
	output(y);
	output(*getStruct(&y));
	print(getStruct(&y));
	getStruct(&y)-> x = 0;
	*getStruct(&y) = (struct point){1,2};
	
}

struct point* getStruct(struct point*p)
{
	scanf("%d", &p->x);//传进来一个指针，再把这个指针中的数改变，最后传出这个指针 
	scanf("%d", &p->y);
	printf("%d,%d", p->x,p->y);
	return 0;
}

void output(struct point p)
{
	printf("%d,%d",p.x, p.y); 
}

void print(const struct point *p)
{
	printf("%d,%d", p->x, p->y); 
}

