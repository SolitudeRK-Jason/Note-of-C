/*
2021年9月16日16:01:04
目的：通过简单算法加深对for和if的控制语句
*/
# include <stdio.h>
int main(void)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	int cnt = 0;
	int avg = 0;
	
	for (i = 1; i <= 100; ++i)
	{
		if (i % 2 == 1)
		{
			sum1 = sum1 + i;
			++cnt;
		}
		else
			sum2 = sum2 + i;
	}
	avg = sum1 / cnt;

	printf("奇数和 = %d\n", sum1);
	printf("奇数个数 = %d\n", cnt);
	printf("平均值 = %d\n", avg);
	printf("偶数和 = %d\n", sum2);
	return 0;
}
/*
在visio studio中输出结果为
-------------------------
奇数和 = 2500
奇数个数 = 50
平均值 = 50
偶数和 = 2550
-------------------------
总结：仔细体会上述语句的流程
*/