/*
2021��12��18��11:42:02
Ŀ�ģ�������ζ�̬������ѧ����Ϣ�Ľṹ������
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

	printf("������ѧ����������");
	printf("length = ");
	scanf_s("%d",&len);
	
	pArr = (struct Student*)malloc(len * (sizeof(struct Student)));
	//����
	for (i = 0; i < len; ++i) {
		printf("��%d��ѧ����ϢΪ��",i+1);
		printf("age =");
		scanf_s("%d",&pArr[i].age);

		printf("name =");
		scanf_s("%s",pArr[i].name,100);//name�����������������������Ԫ�صĵ�ַ

		printf("score =");
		scanf_s("%f", &pArr[i].score);
	}
	//���ɼ�����
	for (i = 0; i < len; ++i) {
		for (j = 0; j < len - 1 - i; ++j) {
			if (pArr[j].score < pArr[j+1].score) {
				t = pArr[j];
				pArr[j] = pArr[j + 1];
				pArr[j + 1] = t;
			}
		}
	}

	//���
	printf("\n\nѧ������Ϣ�ǣ�\n");
	for (i = 0; i < len; ++i) {
		printf("��%d��ѧ����ϢΪ��\n", i + 1);
		printf("age = %d\n",pArr[i].age);
		printf("name = %s\n",pArr[i].name);//���ִ�й���Ϊ���ַ��������ҵ���������ʼ��ַ��Ȼ�������������ַ���ֱ������'\0'Ϊֹ�����Բ����*
		printf("score = %f",pArr[i].score);
		printf("\n");
	}

	return 0;
}