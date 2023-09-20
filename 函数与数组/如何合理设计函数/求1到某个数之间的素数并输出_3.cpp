/*
连续调用两个函数实现
令主调函数的功能变为调用函数而不增加其他功能
*/
# include <stdio.h>

bool IsPrime(int m)
{
	int i;

	for (i = 2; i < m; ++i)
	{
		if (0 == m % i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;
}

void TraverseVal(int n)
{
	int i;

	for (i = 2; i <= n; ++i)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}
}

int main(void)
{
	int val;

	printf("请输入需要判断区间的的最大值：");
	scanf_s("%d", &val);
	TraverseVal(val);
	
	return 0;
}
/*
1.函数的功能有可能单一以实现重复利用
*/