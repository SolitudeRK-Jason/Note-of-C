/*
����������������ʵ��
�����������Ĺ��ܱ�Ϊ���ú�������������������
*/
# include <stdio.h>

bool IsPrime(int m)
{
	int i;

	for (i = 2; i < m; ++i)
	{
		if (0 == m % i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;
}

void TraverseVal(int n)
{
	int i;

	for (i = 2; i <= n; ++i)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}
}

int main(void)
{
	int val;

	printf("��������Ҫ�ж�����ĵ����ֵ��");
	scanf_s("%d", &val);
	TraverseVal(val);
	
	return 0;
}
/*
1.�����Ĺ����п��ܵ�һ��ʵ���ظ�����
*/