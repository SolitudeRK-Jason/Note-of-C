/*
2021年12月11日20:10:10
目的：掌握结构体初始化和赋值
*/
# include <stdio.h>

struct Student {
	int age;
	float score;
	char sex;
};

int main(void) {
	struct Student st = { 88,66,'F' };//定义变量的同时赋初值
	struct Student st2;//先定义变量再对内部成员进行单独赋值
	st2.age = 88;
	st2.score = 90;
	st2.sex = 'F';

	return 0;
}