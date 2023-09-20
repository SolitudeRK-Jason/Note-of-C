/*
2021年11月10日13:18:44
目的：充分理解形参和实参的区别，即形参和实参永远不一样
*/
# include <stdio.h>

void swap(int* p, int* q)
{
	int t;

	t = *p;
	*p = *q;
	*q = t;

}
int main(void)
{
	int a, b;
	a = 3;
	b = 5;

	swap(&a, &b);
	printf("a = %d\n，b = %d\n", a, b);
	return 0;
}
void swap_1(int i, int j)
{
	int t;

	t = i;
	i = j;
	j = t;

}

void swap_2(int* p, int* q)
{
	int* t;

	t = p;
	p = q;
	q = t;
}
/*
在visio studio中输出结果为
------------------------
a = 5
b = 3
------------------------
总结：指针可以令被调函数返回一个以上的值
实参和形参：
1.实参和形参是分别属于两个函数的局部变量，并无联系，即使将i和j改为a和b，仍然不是同一个变量
2.当被调函数运行完之后，为形参分配的空间就被释放掉即，所以在swap_1函数里面，将ab值发送给ij后，互换的是两个形参的值，运行完后即被释放，对主函数的ab并无产生影响
3.在swap_2函数里面，将ab的地址发送给pq后，互换的是两个形参的内容，对主函数的a并无产生影响
4.在swap函数里面，由于pq接受了ab的地址，所以*p和*q分别就是ab，互换的就是主函数的ab值，但是pq并不是ab，仍然是单独的变量，系统仍然会为其分配空间。总之，使用指针变量取了ab地址后，就可以在被调函数里面改变ab的值
5.a，b，i，j，p，q均为静态变量，它们的地址一旦经过系统分配，就无法改变。
*/