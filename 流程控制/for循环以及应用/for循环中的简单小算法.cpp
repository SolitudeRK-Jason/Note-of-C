/*
2021��9��16��16:01:04
Ŀ�ģ�ͨ�����㷨�����for��if�Ŀ������
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

	printf("������ = %d\n", sum1);
	printf("�������� = %d\n", cnt);
	printf("ƽ��ֵ = %d\n", avg);
	printf("ż���� = %d\n", sum2);
	return 0;
}
/*
��visio studio��������Ϊ
-------------------------
������ = 2500
�������� = 50
ƽ��ֵ = 50
ż���� = 2550
-------------------------
�ܽ᣺��ϸ���������������
*/