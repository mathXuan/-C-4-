//本题要求定义一个函数，在字符串中查找字符，并定位在最后一次找到的位置。

#include <stdio.h> 
#include <string.h>
char *match(char *s, char ch); 

int main(void )
{
    char ch, str[80], *p = NULL;

    scanf("%s", str);
    getchar();                 /* 跳过输入字符串和输入字符之间的分隔符 */
    ch = getchar();          /* 输入一个字符 */
    p = match(str, ch);     /* 调用函数match() */
    if( p != NULL ){        /* 找到字符ch */
        printf("%s\n", p);
    }else{ 
        printf("Not Found.\n");
    }

    return 0;
}

//字符串不能用数组，应该用指针++，相当于数组 
char *match(char *s, char ch)
{
	char *ps = NULL;
	
	while(*s!='\0')
	{
		if(*s==ch)
		{
			ps = s;
		}
		s++;
	}
	
	return ps;
}
