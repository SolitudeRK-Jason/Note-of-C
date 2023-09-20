# include <stdio.h>

int a, b, res;
void plus(void)
{
	res = a + b;
}
int main(void)
{
	printf("a = \n");
	scanf_s("%d", &a);

	printf("b =\n");
	scanf_s("%d", &b);

	plus();
	printf("a + b = %d", res);
	return 0;
}
//全局变量在被调函数里赋值不需要return返回就可以在主调函数里面使用
//在被调函数里面定义的属于局部变量，局部变量需要return返回至主调函数里面才可使用，见return plus_1