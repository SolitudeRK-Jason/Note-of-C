/*
2021年12月10日19:58:47
目的：理解动态内存可以跨函数使用的原因
*/
# include <stdio.h>
# include <malloc.h>

void f(int** q) {
	*q = (int*)malloc(sizeof(int));//sizeof(数据类型)返回值为该数据类型所占的字节数
	**q = 5;
}

int main(void) {
	int* p;

	f(&p);
	printf("%d\n", *p);//该语句语法和逻辑都无问题，因为p指向的是动态分配的4个字节，动态内存是在堆中分配，f函数运行完毕出栈后动态内存不会被释放
	return 0;
}
/*
在visio studio中输出结果为
—————————————
5
—————————————
*/