/*
2021��9��16��15:37:29
Ŀ�ģ����for��ID��Ƕ��ʹ��_2
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
��visio studio��������Ϊ
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
�ܽ᣺ifĬ�Ͽ���һ�����
һ��ִ����8��ѭ������Ӧ���8����
*/