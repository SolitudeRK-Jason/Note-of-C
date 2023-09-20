# include <stdio.h>

int plus(int i, int j)
{
	int m;
	m = i + j;
	return m;
}
int main(void)
{
	int a, b;

	printf("a = \n");
	scanf_s("%d", &a);

	printf("b =\n");
	scanf_s("%d", &b);

	plus(a, b);
	printf("a + b = %d", plus(a, b));
	return 0;
}