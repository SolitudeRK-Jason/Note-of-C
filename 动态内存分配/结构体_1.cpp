/*
2021年12月10日20:28:17
目的：初步了解结构体与其表示方法
*/
# include <stdio.h>

//第一种方式:定义新的数据类型即struct Student，可在mian函数里面定义不同的变量名如st来重复使用该结构体
struct Student {
	int age;
	float score;
	char sex;
};//注意要加分号！！！

//第二种方式：定义数据类型同时定义了变量名st2，只能使用该结构体1次
struct Student2 {
	int age;
	float score;
	char sex;
}st2;

//第三种形式
struct  {
	int age;
	float score;
	char sex;
}st3;
int main(void) {
	struct Student st = { 80,66,'F' };//
	return 0;
}
/*
总结：
1.结构体是为了表示一些复杂的事物，而普通的基本类型无法满足试实际要求
2.结构体是一些基本数据类型组合在一起所形成的一个新的复合数据类型
3.结构体的前两种表示方法比较常用，推荐使用第一种
*/