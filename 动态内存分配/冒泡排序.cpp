# include <stdio.h>

void sort(int*a,int len) {
	int i;
	int j;
	int t;

	for (i = 0; i < len - 1; ++i) {  //外循坏确定循环的次数
		for (j = 0; j < len -1-i; ++j) {  //内循环把len-1-i中最大的数放在右边
			if (a[j] > a[j+1]) {  // > 表示升序排列，< 表示降序排列
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
在visio studio中输出结果为
—————————————
-8  0  2  8  10  11
—————————————
*/