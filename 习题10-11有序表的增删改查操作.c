//��������һ��������N,��һ�����ظ�Ԫ�صġ���С�������еġ�N��Ԫ�ص������Ȼ������Ļ����ʾ���²˵�����ź�ѡ���
/* ��������ɾ�Ĳ���� */
#include<stdio.h>
#define MAXN 10000    /* ������ų�����ʾ����a�ĳ��� */

int Count = 0;        /* ��ȫ�ֱ���Count��ʾ����a�д������Ԫ�ظ��� */
void select(int a[], int option, int value); /* ��������������a���к��ֲ����Ŀ��ƺ��� */
int input_array(int a[ ]);    /* ������������a�ĺ��� */
void print_array(int a[ ]);    /* �����������a�ĺ��� */
int insert(int a[ ], int value);    /* ����������a�в���һ��ֵΪvalue��Ԫ�صĺ��� */
int del(int a[ ], int value);    /* ɾ����������a�е���value��Ԫ�صĺ��� */
int modify(int a[ ], int value1, int value2); /* ����������a�е���value1��Ԫ�أ��滻Ϊvalue2 */ 
int query(int a[ ], int value);     /* �ö��ַ�����������a�в���Ԫ��value�ĺ��� */

int main(void) 
{
   int option, value, a[MAXN];
    
    if(input_array(a) == -1){     /* ���ú��������������� a */
         printf("Error");        /* a�����������飬�������Ӧ����Ϣ */
         return 0;
    }
    
    printf("[1] Insert\n");    /* ����4����ʾ�˵�*/
    printf("[2] Delete\n");
    printf("[3] Update\n");
    printf("[4] Query\n");
    printf("[Other option] End\n");
    while (1) {            /* ѭ�� */
        scanf("%d", &option);         /* �����û�����ı�� */
        if (option < 1 || option > 4) {    /* �������1��2��3��4����ı�ţ�����ѭ�� */
            break;
        }
        scanf("%d", &value);         /* �����û�����Ĳ���value */
        select(a, option, value);         /* ���ÿ��ƺ��� */
        printf("\n");
    }
    printf("Thanks.");            /* �������� */
    
    return 0;
}

/* ���ƺ��� */
void select(int a[ ], int option, int value) 
{
    int index, value2;
    
    switch (option) {
        case 1:
            index = insert(a, value);      /* ���ò��뺯������������ a �в���Ԫ��value */
            if(index == -1){        /* ���������Ѵ��ڣ��������Ӧ����Ϣ */
                printf("Error");
            }else{                        
                print_array(a);        /* ������������������������������a */
            }
            break;
        case 2:
            index = del(a, value);      /* ����ɾ���������������� a ��ɾ��Ԫ��value */
            if(index == -1){        /* û�ҵ�value���������Ӧ����Ϣ */
                printf("Deletion failed.");
        }else{
            print_array(a);         /* ����������������ɾ�������������a */
        }
            break;
        case 3:
            scanf("%d", &value2);         /* �����û�����Ĳ���value2 */
            index = modify(a, value, value2);      /* �����޸ĺ������������� a ���޸�Ԫ��value��ֵΪvalue2 */
            if(index == -1){            /* û�ҵ�value����vaule2�Ѵ��ڣ��������Ӧ����Ϣ */
                printf("Update failed.");
            }else{
            print_array(a);         /* �����������������޸ĺ����������a */
            }
            break;
        case 4:
            index = query(a, value);     /* ���ò�ѯ�������������� a �в���Ԫ��value */
            if(index == -1){        /* û�ҵ�value���������Ӧ����Ϣ */
                printf( "Not found.");
            }else{            /* �ҵ����������Ӧ���±� */
            printf("%d", index);
            }
            break;
    }
}

/* ��������뺯�� */
int input_array(int a[ ]) 
{
    scanf("%d", &Count);
    for (int i = 0; i < Count; i ++) {
        scanf("%d", &a[i]);
        if(i > 0 && a[i] <= a[i-1]){    /* a������������ */
            return -1;
        }
    }
    
    return 0;
}

/* ������������ */
void print_array(int a[ ]) 
{
    for (int i = 0; i < Count; i ++) { /* ���ʱ�������ּ���һ���ո�ֿ�����ĩ�޿ո� */
        if(i == 0){     
           printf("%d", a[i]);
        }else{
           printf(" %d", a[i]);
        }
    }
}
 
 
int insert(int a[], int value)
{
    int i;
    for (i = 0; i < Count; i++)
    {
        if (value < a[i])
            break;
        if (value == a[i])
            return -1;
    }
 
    for (int j = Count; j > i; j--)
        a[j] = a[j - 1];
 
    a[i] = value;
    Count++;
 
    return 0;
}
 
int del(int a[], int value)
{
    int i;
    for (i = 0; i < Count; i++)
    {
        if (value == a[i])
            break;
    }
    if (i == Count)
        return -1;
 
    for (int j = i; j < Count - 1; j++)
        a[j] = a[j + 1];
    Count--;
 
    return 0;
}
 
int modify(int a[], int value1, int value2)
{
    if (del(a, value1) == -1)
        return -1;
    if (insert(a, value2) == -1)
        return -1;
    return 0;
}
 
int query(int a[], int value)
{
    int mid, left = 0, right = Count - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] < value)
            left = mid + 1;
        else if (a[mid] > value)
            right = mid - 1;
        else
            return mid;
    }
    return -1;
}
