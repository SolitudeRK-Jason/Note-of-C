/*
2021年10月19日20:49:32
目的：判断一个数是否为素数
*/
# include <stdio.h>
bool IsPrime(int val)
{
	int i;

	for (i = 2; i < val; ++i)
	{
		if (0 == val % i)   //注意这里养成 定值 == 表达式  的好习惯，因为这样少写一个等号程序会报错，但是反过来少写一个等号程序不会报错会给检查带来难度（尤其当代码量很大时）
			break;
	}
	if (i == val)
		return true;
	else
		return false;
}
int main(void)
{
	int m;  //也可以用val

	scanf_s("%d", &m);
	if (IsPrime(m))
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
/*
在visio studio中输出结果为
--------------------------
5
Yes
--------------------------
总结：函数的功能应尽可能单一
主调函数发送的变量可以与形参相同，因为作用域不同
*/