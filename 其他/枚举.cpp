/*
2021��12��19��18:57:11
Ŀ�ģ��˽�ö�ٵ��÷�
*/
# include <stdio.h>

enum weekday {
	Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};

int main(void) {
	enum weekday day = Wednesday;

	printf("%d\n",day);
	return 0;
}
/*
��visio studio��������Ϊ
����������������������������
2
����������������������������
�ܽ᣺enum weekday�Ƕ�����һ����������
��Monday��Sunday��C������Ĭ��Ϊ0-6�������ʱ�õ���%d
*/