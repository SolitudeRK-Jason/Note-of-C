/*
2021��10��15��22:04:40
Ŀ��;����break��ѭ���е�����
*/
# include <stdio.h>

int main(void)
{
	int i = 0;

	switch (i)
	{
	case 0:
		printf("AAA\n");
		break;
	}

	for (i = 0; i < 3; ++i)
	{
		if (1)
			break;
			printf("BBB\n");//�������
	}
	return 0;
}
/*
��visio studio��������Ϊ
--------------------------
AAA
--------------------------
�ܽ᣺
1.break����switch����������ֹswitch
2.break����ѭ��������ֹѭ��
3.break���ڶ��Ƕ����������ֹ�����ѭ����䣬���ڶ��switchǶ�������ֹ�����switch
4.break����ֱ������if��䣬����if����ѭ���ڲ������
*/