/*
2021年9月16日15:37:29
目的：理解for和ID的嵌套使用_2
*/
# include <stdio.h>
int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i <= 10; ++i)
	{
		if (i % 3 == 0)
			sum = sum + i;
			printf("sum = %d\n", sum);
	}
	return 0;
}
/*
在visio studio中输出结果为
-------------------------
sum = 3
sum = 3
sum = 3
sum = 9
sum = 9
sum = 9
sum = 18
sum = 18
-------------------------
总结：if默认控制一个语句
一共执行了8次循环所以应输出8个数
*/