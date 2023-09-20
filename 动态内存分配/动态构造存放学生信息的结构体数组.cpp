/*
2021年12月18日11:42:02
目的：掌握如何动态构造存放学生信息的结构体数组
*/
# include <stdio.h>
# include <malloc.h>

struct Student {
	int age;
	float score;
	char name[100];
};

int main(void) {
	int len;
	struct Student* pArr;
	int i;
	int j;
	struct Student t;

	printf("请输入学生的数量：");
	printf("length = ");
	scanf_s("%d",&len);
	
	pArr = (struct Student*)malloc(len * (sizeof(struct Student)));
	//输入
	for (i = 0; i < len; ++i) {
		printf("第%d个学生信息为：",i+1);
		printf("age =");
		scanf_s("%d",&pArr[i].age);

		printf("name =");
		scanf_s("%s",pArr[i].name,100);//name是数组名，本身就是数组首元素的地址

		printf("score =");
		scanf_s("%f", &pArr[i].score);
	}
	//按成绩排序
	for (i = 0; i < len; ++i) {
		for (j = 0; j < len - 1 - i; ++j) {
			if (pArr[j].score < pArr[j+1].score) {
				t = pArr[j];
				pArr[j] = pArr[j + 1];
				pArr[j + 1] = t;
			}
		}
	}

	//输出
	printf("\n\n学生的信息是：\n");
	for (i = 0; i < len; ++i) {
		printf("第%d个学生信息为：\n", i + 1);
		printf("age = %d\n",pArr[i].age);
		printf("name = %s\n",pArr[i].name);//输出执行过程为按字符数组名找到其数组起始地址，然后逐个输出其中字符，直到读到'\0'为止，所以不需加*
		printf("score = %f",pArr[i].score);
		printf("\n");
	}

	return 0;
}