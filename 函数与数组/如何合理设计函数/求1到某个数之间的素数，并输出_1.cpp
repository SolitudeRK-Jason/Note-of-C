/*
ֻ��main����ʵ��
*/
# include <stdio.h>

int main(void)
{
	int val;
	int i, j;

	printf("��������Ҫ�ж�����ĵ����ֵ��");
	scanf_s("%d", &val);

	for (i = 2; i <= val; ++i)
	{
		for (j = 2; j < i; ++j)
		{
			if (0 == i % j)
				break;
		}
		if (j == i)
			printf("%d\n",j);
	}
	return 0;
}