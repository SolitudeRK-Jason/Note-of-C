/*
2021��12��11��20:26:27
Ŀ�ģ��������ȡ���ṹ��ĳ�Ա
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

	st.score = 66.6f;//66.6��c������Ĭ��Ϊdouble���ͣ���ϣ��һ��ʵ��Ϊfloat���ͣ��������ĩβ��f����F��66.6Ϊdouble���ͣ�66.6f��66.6FΪfloat����
	pst->age = 88;
	printf("%f  %d\n",pst->score,st.age);
	return 0;
}
/*
��visio studio��������Ϊ
����������������������������
66.599998  88
����������������������������
�ܽ᣺�����ַ�ʽ��
1.�ṹ�������.��Ա��
2.ָ�������->��Ա���������ã�
	ָ�������->��Ա�� �ڼ�����ڲ���ת��Ϊ(*ָ�������).��Ա���ķ�ʽִ�У����ַ�ʽ�ȼ�
*/