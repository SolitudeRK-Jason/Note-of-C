/*
2021��12��10��19:15:57
Ŀ�ģ��˽�༶ָ��
*/
# include <stdio.h>

void f(int** q) {
	//*q��Ϊp

}

int main(void) {
	int i = 10;
	int* p = &i;
	int** q = &p;//qΪint **���ͣ�*q��Ϊp
	int*** r = &q;//rΪint ***���ͣ�*r��Ϊq

	f(&p);
	return 0;
}