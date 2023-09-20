/*
2021年10月15日22:04:40
目的;归纳break在循环中的作用
*/
# include <stdio.h>

int main(void)
{
	int i = 0;

	switch (i)
	{
	case 0:
		printf("AAA\n");
		break;
	}

	for (i = 0; i < 3; ++i)
	{
		if (1)
			break;
			printf("BBB\n");//不会输出
	}
	return 0;
}
/*
在visio studio中输出结果为
--------------------------
AAA
--------------------------
总结：
1.break用于switch中作用是终止switch
2.break用于循环中则终止循环
3.break用于多层嵌套则用来中止最近的循环语句，用于多层switch嵌套则会中止最近的switch
4.break不可直接用于if语句，除非if属于循环内部的语句
*/