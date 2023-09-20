/*
2021年12月18日10:38:03
目的：掌握结构体变量作为函数参数传递的问题（发送地址还是发送内容）
*/
# include <stdio.h>
# include <string.h>

struct Student {
	int age;
	float score;
	char name[100];
};

void input(struct Student*);
void output(struct Student*);

int main(void) {
	struct Student st;

	input(&st);//对结构体变量进行输入，必须发送st的地址
	output(&st);//对结构体变量进行输出，可以发送st的地址也可以发送st的内容
	return 0;
}
void input(struct Student* pst) {//pstu只占4个字节
	pst->age = 10;
	strcpy_s(pst->name, "San");//不能写pst->name = "San"
	pst->score = 66.6;

}

void output(struct Student*pstu) {
	printf("%d  %f  %s\n", pstu->age, pstu->score, pstu->name);
}
/*
在visio studio中输出结果为
——————————————
10  66.599998  San
——————————————
总结：
	指针的优点
	（1）占用内存小
	（2）传递速度快
	（3）执行速度快
*/