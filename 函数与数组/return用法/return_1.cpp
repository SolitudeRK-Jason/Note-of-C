/*
2021年10月19日19:07:59
目的：return用法
*/
# include <stdio.h>

void f(void)
{
	int i;

	for (i = 0; i < 3; ++i)
	{
		printf("A\n");
		return;  
	}
	printf("B\n");
}
int main(void)
{
	f();
	return 0;
}
/*
在visio studio中输出结果为
--------------------------
A
--------------------------
总结：
1.return 表达式; 的含义：
	1)中止被调函数，并向主调函数返回表达式的值
	2）若表达式为空则只中止被调函数，不向主调函数返回任何值
2.若将被调函数的return换成break则AB都会输出
*/