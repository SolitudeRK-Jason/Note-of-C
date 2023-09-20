/*
2021年10月12日20:02:24
目的：for嵌套循环复习
*/
# include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 0; i < 3; ++i)
	{
		printf("A\n");
		for (j = 0; j < 3; ++j)
		{
			printf("B\n");
			printf("C\n");
		}
	}
	return 0;
}
/*
在visio studio中输出结果为
--------------------------
A
B
C
B
C
B
C
A
B
C
B
C
B
C
A
B
C
B
C
B
C
--------------------------
即ABCBCBC循环3次
*/