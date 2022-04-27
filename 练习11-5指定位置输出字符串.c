#include <stdio.h>
#include <string.h> 

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

char *match( char *s, char ch1, char ch2 ){
    char *h,*t,cs[100];
    strcpy(cs,s);
    h=cs;
    while(*h!=ch1&&*h!='\0')h++;
    if(*h!='\0'){
        t=h;
        while(*t!=ch2&&*t!='\0')t++;
        if(*t!='\0'){
            t++;
            *t='\0';
        }
    }
    printf("%s\n",h);
    h=s;
    while(*h!=ch1&&*h!='\0')h++;
    return h;
}


