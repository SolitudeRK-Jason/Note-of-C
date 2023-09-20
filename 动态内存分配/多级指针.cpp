/*
2021年12月10日19:15:57
目的：了解多级指针
*/
# include <stdio.h>

void f(int** q) {
	//*q即为p

}

int main(void) {
	int i = 10;
	int* p = &i;
	int** q = &p;//q为int **类型，*q即为p
	int*** r = &q;//r为int ***类型，*r即为q

	f(&p);
	return 0;
}