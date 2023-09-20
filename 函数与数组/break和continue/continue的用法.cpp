/*
2021年10月17日22:06:01
目的：理解continue的用法
*/
# include <stdio.h>

int main(void)
{
	int i = 0;
	int j,m;

	scanf_s("%d", &j);
	printf("j = %d\n", j);
	char ch;

	while (ch = getchar() != '\n')
		continue;

	scanf_s("%d",&m);
	printf("m = %d\n", m);

	for (i = 0; i < 3; ++i)
	{
		printf("A\n");
		continue;//如果该行代码执行，会跳去执行++i
		printf("B\n");
	}

	while (i < 4)
	{
		printf("C\n");
		++i;
		continue;//如果该行代码执行会去跳去执行i < 4
		printf("D\n");
	}

	return 0;
}
/*
在visio studio中输出结果为
--------------------------
5adfa
j = 5
65465a
m = 65465
A
A
A
C
--------------------------
总结：continue用于中止本次循环，进行下次循环
*/