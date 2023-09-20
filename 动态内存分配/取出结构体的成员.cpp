/*
2021年12月11日20:26:27
目的：掌握如何取出结构体的成员
*/
# include <stdio.h>

struct Student {
	int age;
	float score;
	char sex;
};

int main(void) {
	struct Student st = {80,66.6,'F'};
	struct Student* pst = &st;

	st.score = 66.6f;//66.6在c语言中默认为double类型，若希望一个实数为float类型，则必须在末尾加f或者F，66.6为double类型，66.6f或66.6F为float类型
	pst->age = 88;
	printf("%f  %d\n",pst->score,st.age);
	return 0;
}
/*
在visio studio中输出结果为
——————————————
66.599998  88
——————————————
总结：有两种方式：
1.结构体变量名.成员名
2.指针变量名->成员名（更常用）
	指针变量名->成员名 在计算机内部会转化为(*指针变量名).成员名的方式执行，两种方式等价
*/