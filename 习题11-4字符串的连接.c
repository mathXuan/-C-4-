#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t );

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};
    
    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);
    
    return 0;
}

char *str_cat(char* s, char* t){
    //����str_catӦ���ַ���t���Ƶ��ַ���s��ĩ�ˣ����ҷ����ַ���s���׵�ַ��
    char* temp=s;
    while(*temp!='\0'){
        temp++;
    }
    while(*t!='\0'){
        *temp = *t;
        temp++;
        t++;
    }
    *temp='\0';
    return s;
}

