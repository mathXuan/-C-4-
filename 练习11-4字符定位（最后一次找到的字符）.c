//����Ҫ����һ�����������ַ����в����ַ�������λ�����һ���ҵ���λ�á�

#include <stdio.h> 
#include <string.h>
char *match(char *s, char ch); 

int main(void )
{
    char ch, str[80], *p = NULL;

    scanf("%s", str);
    getchar();                 /* ���������ַ����������ַ�֮��ķָ��� */
    ch = getchar();          /* ����һ���ַ� */
    p = match(str, ch);     /* ���ú���match() */
    if( p != NULL ){        /* �ҵ��ַ�ch */
        printf("%s\n", p);
    }else{ 
        printf("Not Found.\n");
    }

    return 0;
}

//�ַ������������飬Ӧ����ָ��++���൱������ 
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
