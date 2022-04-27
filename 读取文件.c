#include <stdio.h>
#include "student.h"

void read(FILE *fp, int index);
/*argc �� argument count����д��
��ʾargv�������ָ��ָ����ڴ�����
�б������stubд�����Ч�����в����ĸ���.

argv �� argument vector����д��
��ʾ����main�����Ĳ������л�ָ�룬
���ҵ�һ������argv[0]һ���ǳ�������ƣ�
���Ұ����˳������ڵ�����·��������ȷ��
��˵��Ҫ�����main�����Ĳ���������argc-1��
*/
int main(int argc, char const *argv[])
{
	FILE *fp = fopen("student.data", "r");
	if(fp){
		fseek(fp, 0L, SEEK_END);
		long size = ftell(fp);
		int number = size / sizeof(Student);
		int index = 0;
		printf("��%d�����ݣ���Ҫ���ڼ�����", number);
		scanf("%d", &index);
		read(fp, index-1);
		fclose(fp);
	}
	
	return 0;
 } 
 /*FILE ��ϵͳ�����һ�ֽṹ���͵����ơ�

FILE *fp�� ��������������
���� fp �� FILE��ָ�룬����ָ��FILE���� 
���ļ��ṹ����

�ļ���-- �ų�һ�ӣ����Ⱥ����� 
���루�������һ�����ݣ�פ����ͨ�� 
�������������������������ͬˮ�����
������������������ļ���д���ļ���
*/
 void read(FILE *fp, int index)
 {
/*
int fseek( FILE *stream, long offset, int origin );
��һ������streamΪ�ļ�ָ��
�ڶ�������offsetΪƫ������������ʾ����ƫ�ƣ�������ʾ����ƫ��
����������origin�趨���ļ������￪ʼƫ��,����ȡֵΪ��SEEK_CUR�� SEEK_END �� SEEK_SET
SEEK_SET�� �ļ���ͷ
SEEK_CUR�� ��ǰλ��
SEEK_END�� �ļ���β
����SEEK_SET,SEEK_CUR��SEEK_END������Ϊ0��1��2.
����֮��
fseek(fp,100L,0);��fpָ���ƶ������ļ���ͷ100�ֽڴ���
fseek(fp,100L,1);��fpָ���ƶ������ļ���ǰλ��100�ֽڴ���
fseek(fp,100L,2);��fpָ���˻ص����ļ���β100�ֽڴ���
*/
 	fseek(fp, index*sizeof(Student), SEEK_SET);
 	Student stu;
/*c������fread�����﷨Ϊ
size_t fread( void *restrict buffer, size_t size, size_t count, FILE *restrict stream )
buffer��ָ��Ҫ��ȡ���������׸������ָ�룬size��ÿ������Ĵ�С����λ���ֽڣ���count��Ҫ��ȡ�Ķ��������
stream����������ͨ��fread�����ɽ������ݶ�ȡ�����سɹ���ȡ�Ķ��������
*/
 	if (fread(&stu, sizeof(Student), 1, fp) == 1){
 		printf("��%d��ѧ����", index - 1);
 		printf("\t%������%s\n", stu.name);
 		printf("\t�Ա�:");
 		switch(stu.gender){
 			case 0: printf("��\n");break;
 			case 1: printf("Ů\n");break;
 			case 2: printf("����\n");break;
		 }
		 printf("\t���䣺%d\n", stu.age)
	 }
 }
