#include<stdio.h>
int main()
{
    int char_num=0,int_num=0,space_num=0,other_num=0;
    char ch;
    while((ch=getchar())!='\n')
    {
        if(ch<='z'&&ch>='a'||ch<='Z'&&ch>='A')
        {
            char_num++;
        }
        else if(ch<='9'&&ch>='0')
        {
            int_num++;
        }
        else if(ch==' ')
        {
            space_num++;
        }
        else
        {
            other_num++;
        }
    }
    printf("��ĸ������%d\n",char_num);
    printf("���ָ�����%d\n",int_num);
    printf("�ո������%d\n",space_num);
    printf("����������%d\n",other_num);
}
