/*
����һ��bool���͵ĺ���ʵ��
�����_1 ������Ժ��ظ��Ժã����ظ�����Ȼ���Ǻܺ�
*/
# include <stdio.h>

bool IsPrime(int m)
{
	int i;

	for(i = 2; i < m; ++i)
	{
		if (0 == m%i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;
}

int main(void)
{
	int val;
	int i, j;

	printf("��������Ҫ�ж�����ĵ����ֵ��");
	scanf_s("%d", &val);

	for (i = 2; i <= val; ++i)
	{
		if ( IsPrime(i) )
			printf("%d\n", i);
	}
	return 0;
}