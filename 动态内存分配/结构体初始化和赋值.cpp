/*
2021��12��11��20:10:10
Ŀ�ģ����սṹ���ʼ���͸�ֵ
*/
# include <stdio.h>

struct Student {
	int age;
	float score;
	char sex;
};

int main(void) {
	struct Student st = { 88,66,'F' };//���������ͬʱ����ֵ
	struct Student st2;//�ȶ�������ٶ��ڲ���Ա���е�����ֵ
	st2.age = 88;
	st2.score = 90;
	st2.sex = 'F';

	return 0;
}