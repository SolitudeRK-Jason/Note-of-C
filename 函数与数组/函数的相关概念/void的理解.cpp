/*
2021年10月19日16:17:48
目的：理解被调函数中void在不同位置的含义
*/
# include <stdio.h>

int f(void)      //括号里面的void表示函数不能接受数据，int表示的是函数返回值的类型
{
	return 10;
}

void g(void)     //函数名前面的void表示函数无返回值，执行体里面写如return 10;之类会报错 
{
	
}
int main(void)
{
	int j = 88;

	j = f();
	printf("j = %d\n",j);

	return 0;
}
/*
在visio studio中输出结果为
---------------------------
j = 10
---------------------------
*/