#include <stdio.h>
/*rp这个指针指向r，r中有个两个结构，分别是pt1和pt2 
r.pt1.x == rp->pt1.x
*/ 
struct point{
	int x;
	int y;
};

struct rectangle{
	struct point p1;
	struct point p2;
};

void printRect(struct rectangle r)
{
	printf("<%d,%d> to <%d,%d>\n", r.p1.x, r.p1.y, r.p2.x, r.p2.y);//结构中的结构 
}

int main (int argc, char const *argv[])
{
	int i;
	//{第一层表示数组{第二层表示数组单元--结构{第三层表示结构中的结构}}} 
	struct rectangle rects[] = {
		{{1,2}, {3,4}},
		{{5,6}, {7,8}}
	};
	for(i = 0; i<2; i++)
	{
		printRect(rects[i]);
	}
}
