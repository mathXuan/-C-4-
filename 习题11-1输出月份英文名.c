//����Ҫ��ʵ�ֺ��������Է���һ�������·ݵ�Ӣ�����ơ�

#include <stdio.h>

char *getmonth( int n );

int main()
{
    int n;
    char *s;
    
    scanf("%d", &n);
    s = getmonth(n);
    if ( s==NULL ) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}

char *getmonth( int n )
{
    char *month[13] = {"0","January","February","March","April","May","June","July","August","September","October","November","December"};
    if(n > 0 && n <= 12){
        return month[n];
    }
    else 
        return NULL;
}
