/*
2021��10��12��20:02:24
Ŀ�ģ�forǶ��ѭ����ϰ
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
��visio studio��������Ϊ
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
��ABCBCBCѭ��3��
*/