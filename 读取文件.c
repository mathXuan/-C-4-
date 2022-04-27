#include <stdio.h>
#include "student.h"

void read(FILE *fp, int index);
/*argc 是 argument count的缩写，
表示argv这个二级指针指向的内存区域
中保存的由stub写入的有效命令行参数的个数.

argv 是 argument vector的缩写，
表示传入main函数的参数序列或指针，
并且第一个参数argv[0]一定是程序的名称，
并且包含了程序所在的完整路径，所以确切
的说需要输入的main函数的参数个数是argc-1个
*/
int main(int argc, char const *argv[])
{
	FILE *fp = fopen("student.data", "r");
	if(fp){
		fseek(fp, 0L, SEEK_END);
		long size = ftell(fp);
		int number = size / sizeof(Student);
		int index = 0;
		printf("有%d个数据，你要看第几个：", number);
		scanf("%d", &index);
		read(fp, index-1);
		fclose(fp);
	}
	
	return 0;
 } 
 /*FILE 是系统定义的一种结构类型的名称。

FILE *fp； 变量类型声明。
声明 fp 是 FILE型指针，用于指向FILE类型 
（文件结构）。

文件流-- 排成一队，有先后次序的 
输入（或输出）一串数据，驻留并通过 
输入输出缓冲区，进出程序。如同水流般地
流入或流出。它来自文件或写入文件。
*/
 void read(FILE *fp, int index)
 {
/*
int fseek( FILE *stream, long offset, int origin );
第一个参数stream为文件指针
第二个参数offset为偏移量，整数表示正向偏移，负数表示负向偏移
第三个参数origin设定从文件的哪里开始偏移,可能取值为：SEEK_CUR、 SEEK_END 或 SEEK_SET
SEEK_SET： 文件开头
SEEK_CUR： 当前位置
SEEK_END： 文件结尾
其中SEEK_SET,SEEK_CUR和SEEK_END和依次为0，1和2.
简言之：
fseek(fp,100L,0);把fp指针移动到离文件开头100字节处；
fseek(fp,100L,1);把fp指针移动到离文件当前位置100字节处；
fseek(fp,100L,2);把fp指针退回到离文件结尾100字节处。
*/
 	fseek(fp, index*sizeof(Student), SEEK_SET);
 	Student stu;
/*c语言中fread函数语法为
size_t fread( void *restrict buffer, size_t size, size_t count, FILE *restrict stream )
buffer是指向要读取的数组中首个对象的指针，size是每个对象的大小（单位是字节），count是要读取的对象个数，
stream是输入流。通过fread函数可进行数据读取，返回成功读取的对象个数。
*/
 	if (fread(&stu, sizeof(Student), 1, fp) == 1){
 		printf("第%d个学生：", index - 1);
 		printf("\t%姓名：%s\n", stu.name);
 		printf("\t性别:");
 		switch(stu.gender){
 			case 0: printf("男\n");break;
 			case 1: printf("女\n");break;
 			case 2: printf("其他\n");break;
		 }
		 printf("\t年龄：%d\n", stu.age)
	 }
 }
