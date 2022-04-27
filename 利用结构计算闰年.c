#include <stdio.h>
#include <stdbool.h>

struct date{
	int month;
	int day;
	int year;
};

bool isLeap(struct date d);//�ж��������ڵ����Ƿ������� 
int numberOfDays(struct date d);

int main(int argc, char const *argv[])
{
	struct date today, tomorrow;
	
	printf("�������������ڣ��� �� �꣩");
	scanf("%i %i %i", &today.month, &today.day, &today.year);
	//��������һ�� 
	if(today.day != numberOfDays(today)){
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}else if (today.month == 12){//�������һ������һ�� 
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}else{//��ͨ�µ����һ�� 
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	
	printf("����������� %i-%i-%i.\n",tomorrow.year,tomorrow.month,tomorrow.year);
	
	return 0;
}
//�ṹ����ֱ�ӱ��� 
int numberOfDays(struct date d)
{
	int days;
	                             //���������ÿ���µ����һ�� 
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	//���·���Ҫ�����Ƿ������� 
	if(d.month == 2 && isLeap(d))
		days = 29;
	else 
		days = daysPerMonth[d.month - 1];

	return days;//���days��һ���� 
}

bool isLeap (struct date d)
{
	bool leap = false;
	if((d.year %4 == 0 && d.year%100 != 0)|| d.year%400 == 0)
		leap = true;
		
	return leap;
}
