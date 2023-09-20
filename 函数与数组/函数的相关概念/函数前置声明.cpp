/*
2021年10月21日16:47:30
目的：理解函数前置声明的作用
*/
# include <stdio.h>

//void f(void);  //f函数的前置声明，必须加上分号

void g(void)
{
	f();
}

void f(void)
{
	printf("AAA\n");
}

int main(void)
{
	g();

	return 0;
}
/*
在visio studio中输出结果为  报错

总结：原因是函数f的定义放在了调用f语句的后面，将注释运行就正确
函数前置声明：
1.告诉编译器即将出现的若干个字母代表的为一个函数
2.告诉编译器即将可能出现的若干个字母所代表的函数的形参以及返回值的具体情况
3.函数的前置声明是一个语句，必须加上分号
4.对库函数的声明是通过 # include <库函数所在的文件名> 实现的
*/