/*
2021��12��18��10:38:03
Ŀ�ģ����սṹ�������Ϊ�����������ݵ����⣨���͵�ַ���Ƿ������ݣ�
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

	input(&st);//�Խṹ������������룬���뷢��st�ĵ�ַ
	output(&st);//�Խṹ�����������������Է���st�ĵ�ַҲ���Է���st������
	return 0;
}
void input(struct Student* pst) {//pstuֻռ4���ֽ�
	pst->age = 10;
	strcpy_s(pst->name, "San");//����дpst->name = "San"
	pst->score = 66.6;

}

void output(struct Student*pstu) {
	printf("%d  %f  %s\n", pstu->age, pstu->score, pstu->name);
}
/*
��visio studio��������Ϊ
����������������������������
10  66.599998  San
����������������������������
�ܽ᣺
	ָ����ŵ�
	��1��ռ���ڴ�С
	��2�������ٶȿ�
	��3��ִ���ٶȿ�
*/