/*
2021��10��17��22:06:01
Ŀ�ģ����continue���÷�
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
		continue;//������д���ִ�У�����ȥִ��++i
		printf("B\n");
	}

	while (i < 4)
	{
		printf("C\n");
		++i;
		continue;//������д���ִ�л�ȥ��ȥִ��i < 4
		printf("D\n");
	}

	return 0;
}
/*
��visio studio��������Ϊ
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
�ܽ᣺continue������ֹ����ѭ���������´�ѭ��
*/