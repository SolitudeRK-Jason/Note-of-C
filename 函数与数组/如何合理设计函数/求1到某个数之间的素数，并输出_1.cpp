/*
只用main函数实现
*/
# include <stdio.h>

int main(void)
{
	int val;
	int i, j;

	printf("请输入需要判断区间的的最大值：");
	scanf_s("%d", &val);

	for (i = 2; i <= val; ++i)
	{
		for (j = 2; j < i; ++j)
		{
			if (0 == i % j)
				break;
		}
		if (j == i)
			printf("%d\n",j);
	}
	return 0;
}