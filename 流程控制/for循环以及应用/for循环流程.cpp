/*
2021年9月16日14:38:05
目的：求1-100之间所有奇数和同时认识for循环流程
*/
# include <stdio.h>
int main(void)
{
	int i;
	int sum = 0;
	for (i = 1; i <= 100; i += 2)
	{
		sum = sum + i;
	}
	printf("i = %d\n", i);
	printf("sum = %d\n", sum);
	return 0;
}
/*
在visio studio中输出结果为
-------------------------
i= 101
sum = 2500
-------------------------
总结：for循环流程为
i= 1;
i <= 100
sum = sum + i;
i+=2;(第四步标志一次循环结束)
i <= 100(第五步和第四步是紧挨着的，判断是否进入下一流程)

开始到退出循环流程中 i= 1 只执行一次
*/