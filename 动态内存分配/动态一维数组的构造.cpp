/*
2021��12��9��19:09:44
Ŀ�ģ��˽���ι���һ����̬һά����
*/
# include <stdio.h>
# include <malloc.h>

int main(void) {
	int a[5];
	int len;
	int* pArr;
	int i;

	//��̬����һά����
	printf("��������Ҫ��ŵ�Ԫ�ظ���:");
	scanf_s("%d", &len);
	pArr = (int*)malloc(4 * len);

	//��һά������У���Զ�̬һά���鸳ֵ
	for (i = 0; i < len; ++i)
		scanf_s("%d", &pArr[i]);

	//��һά����������
	printf("�������һά����������ǣ�");
	for (i = 0; i < len; ++i)
		printf("%d  ", pArr[i]);

	return 0;
}
/*
��visio studio��������Ϊ
��������������������������
��������Ҫ��ŵ�Ԫ�ظ���:5
1
2
3
4
5
�������һά����������ǣ�1  2  3  4  5
��������������������������
*/