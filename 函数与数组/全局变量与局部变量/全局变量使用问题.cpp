/*
该程序会报错是因为将g函数放到了k定义的前面
全局变量的作用范围是从定义位置往下一直到整个程序介绍
C语言使用函数和变量都需要先定义在实使用
*/
# include <stdio.h>

void g(void)
{
	printf("k = %d\n", k);
}

int k = 99;

int main(void)
{
	g();
	return 0;
}