#include <stdio.h> 
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); /* �����ṩ��ϸ�ڲ��� */

int main()
{
    char s[MAXS], t[MAXS], *pos;
    
    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

char* search(char* s, char* t) {
    char* ch, * p;
    p = t;//�Ӵ� 
    int flag = 0;
    while (*s != '\0') {
        if (*t == '\0') break;
        if (*s == *t && flag == 0) {
            flag = 1;
            ch = s;
        }
        else if (*s != *t) {//Ϊ�˷�ֹֻ���Ӵ���ǰ�벿����ͬ 
            flag = 0;
            t = p;
        }
        s++;
        if (flag) t++;
    }
    if (flag && *t == '\0') return ch;//���*t������'\0'�Ļ��޷�ͨ�����Ե�4 
    else return NULL;
}

