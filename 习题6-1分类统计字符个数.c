//本题要求实现一个函数，统计给定字符串中英文字母、空格或回车、数字字符和其他字符的个数。
#include <stdio.h>
#include<stdlib.h>//调用字符串要调用的库 

void stringcount( char a[], int cnt);
int main()
{
	int i = 0;
	char ch;
	char a[256] = {0};
	int cnt = 0;
	while((ch=getchar())!='\n')
		{
		   	a[i]=ch;
		   	i++;
		}
		cnt = i;
		a[i]='\0';    //加上串尾符
	//自己的错误
	//stringcount(a[i], cnt);函数的形参是数组时，传入的形参应该是数组名，而不应该是例:a[10],这样传入的就是a的第十个数据。
	stringcount(a, cnt);
	
	return 0;
}

void stringcount( char a[], int cnt)
{
	int letter = 0;
	int blank = 0;
	int digit = 0;
	int other = 0;
	
	int i = 0;
	for( i ; i < cnt; i++)
	{
		if((a[i] <= 'z' && a[i] >= 'a') || (a[i] <= 'Z' && a[i] >= 'A')){
			letter++;
		}else if(a[i] == ' '){
			blank++;
		}else if(a[i] <= '9' && a[i] >= '0'){
			digit++;
		}else{
			other++;
		}
	}
	
	printf("letter=%d,blank=%d,digit=%d,other=%d", letter,blank,digit,other);
	
}

/*不用数组，只利用字符串本身也可以进行字符个数的统计 
{
    char c;
    int  letters_num = 0, space_num = 0, digit_num = 0, other_num = 0;
    while ((c = getchar()) != '\n')//输入换行符退出循环
    {
        if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z')) letters_num++;
        else if (c == ' ') space_num++;
        else if (c >= '0'&&c <= '9') digit_num++;
        else other_num++;
    }
    printf("字母=%d，空格=%d，数字=%d，其他=%d", letters_num, space_num, digit_num, other_num);
    return 0;
}
*/

