/*
2021��9��16��15:12:55
Ŀ�ģ���1��100֮�����е��ܱ�3��������֮��
		���for��if��Ƕ��ʹ��
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
��visio studio��������Ϊ
--------------------------
i = 101
sum = 1683
--------------------------

*/