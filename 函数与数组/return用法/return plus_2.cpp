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
//ȫ�ֱ����ڱ��������︳ֵ����Ҫreturn���ؾͿ�����������������ʹ��
//�ڱ����������涨������ھֲ��������ֲ�������Ҫreturn������������������ſ�ʹ�ã���return plus_1