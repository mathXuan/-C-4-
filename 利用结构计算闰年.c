#include <stdio.h>
#include <stdbool.h>

struct date{
	int month;
	int day;
	int year;
};

bool isLeap(struct date d);//判断这天属于的年是否是闰年 
int numberOfDays(struct date d);

int main(int argc, char const *argv[])
{
	struct date today, tomorrow;
	
	printf("请输入今天的日期（月 日 年）");
	scanf("%i %i %i", &today.month, &today.day, &today.year);
	//如果是最后一天 
	if(today.day != numberOfDays(today)){
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}else if (today.month == 12){//如果是这一年的最后一天 
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}else{//普通月的最后一天 
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	
	printf("明天的日期是 %i-%i-%i.\n",tomorrow.year,tomorrow.month,tomorrow.year);
	
	return 0;
}
//结构变量直接被传 
int numberOfDays(struct date d)
{
	int days;
	                             //这堆数字是每个月的最后一天 
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	//二月份需要考虑是否是闰年 
	if(d.month == 2 && isLeap(d))
		days = 29;
	else 
		days = daysPerMonth[d.month - 1];

	return days;//求出days后单一出口 
}

bool isLeap (struct date d)
{
	bool leap = false;
	if((d.year %4 == 0 && d.year%100 != 0)|| d.year%400 == 0)
		leap = true;
		
	return leap;
}
