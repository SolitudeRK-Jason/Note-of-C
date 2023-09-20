/*
2021年10月28日12:16:02
目的：理解常见指针错误类型
*/
# include <stdio.h>

int main(void)
{
	int i;
	int* p;
	int* q;
	i = 5;

	p = &i;
	//*q = p;错误，因为不能将int*类型（指针变量）赋值给int类型
	//p = q;错误，因为q未被初始化，而下行代码打印未被初始化的q所指向的变量的值，属于未被授权的操作
	q = p;//correct，q被赋值了，所以下行代码可以打印q指向的变量i的值
	printf("%d\n", *q);

	return 0;
}
/*
在visio studio中输出结果为
---------------------------
5
---------------------------
*/