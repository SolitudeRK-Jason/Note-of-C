/*
2021年12月9日19:09:44
目的：了解如何构造一个动态一维数组
*/
# include <stdio.h>
# include <malloc.h>

int main(void) {
	int a[5];
	int len;
	int* pArr;
	int i;

	//动态构造一维数组
	printf("请输入您要存放的元素个数:");
	scanf_s("%d", &len);
	pArr = (int*)malloc(4 * len);

	//对一维数组进行，如对动态一维数组赋值
	for (i = 0; i < len; ++i)
		scanf_s("%d", &pArr[i]);

	//对一维数组进行输出
	printf("您输入的一维数组的内容是：");
	for (i = 0; i < len; ++i)
		printf("%d  ", pArr[i]);

	return 0;
}
/*
在visio studio中输出结果为
—————————————
请输入您要存放的元素个数:5
1
2
3
4
5
您输入的一维数组的内容是：1  2  3  4  5
—————————————
*/