/*
调用一个bool类型的函数实现
代码比_1 可理解性和重复性好，但重复性仍然不是很好
*/
# include <stdio.h>

bool IsPrime(int m)
{
	int i;

	for(i = 2; i < m; ++i)
	{
		if (0 == m%i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;
}

int main(void)
{
	int val;
	int i, j;

	printf("请输入需要判断区间的的最大值：");
	scanf_s("%d", &val);

	for (i = 2; i <= val; ++i)
	{
		if ( IsPrime(i) )
			printf("%d\n", i);
	}
	return 0;
}