/*
2021年9月16日15:12:55
目的：求1—100之间所有的能被3整除的数之和
		理解for和if的嵌套使用
*/
# include <stdio.h>
int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i <= 100; ++i)
	{
		if (i % 3 == 0)
		{
			sum = sum + i;
		}
	}
	printf("i = %d\n", i);
	printf("sum = %d\n", sum);
	return 0;
}
/*
在visio studio中输出结果为
--------------------------
i = 101
sum = 1683
--------------------------

*/