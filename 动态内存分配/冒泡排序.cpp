# include <stdio.h>

void sort(int*a,int len) {
	int i;
	int j;
	int t;

	for (i = 0; i < len - 1; ++i) {  //��ѭ��ȷ��ѭ���Ĵ���
		for (j = 0; j < len -1-i; ++j) {  //��ѭ����len-1-i�������������ұ�
			if (a[j] > a[j+1]) {  // > ��ʾ�������У�< ��ʾ��������
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}

}

int main(void) {
	int a[6] = {10,2,8,-8,11,0};
	int i;

	sort(a, 6);

	for (i = 0; i < 6; ++i)
		printf("%d  ",a[i]);
	return 0;
}
/*
��visio studio��������Ϊ
��������������������������
-8  0  2  8  10  11
��������������������������
*/