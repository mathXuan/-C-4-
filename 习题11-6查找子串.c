#include <stdio.h> 
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); /* 裁判提供，细节不表 */

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
    p = t;//子串 
    int flag = 0;
    while (*s != '\0') {
        if (*t == '\0') break;
        if (*s == *t && flag == 0) {
            flag = 1;
            ch = s;
        }
        else if (*s != *t) {//为了防止只和子串的前半部分相同 
            flag = 0;
            t = p;
        }
        s++;
        if (flag) t++;
    }
    if (flag && *t == '\0') return ch;//如果*t不满足'\0'的话无法通过测试点4 
    else return NULL;
}

