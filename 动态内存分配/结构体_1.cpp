/*
2021��12��10��20:28:17
Ŀ�ģ������˽�ṹ�������ʾ����
*/
# include <stdio.h>

//��һ�ַ�ʽ:�����µ��������ͼ�struct Student������mian�������涨�岻ͬ�ı�������st���ظ�ʹ�øýṹ��
struct Student {
	int age;
	float score;
	char sex;
};//ע��Ҫ�ӷֺţ�����

//�ڶ��ַ�ʽ��������������ͬʱ�����˱�����st2��ֻ��ʹ�øýṹ��1��
struct Student2 {
	int age;
	float score;
	char sex;
}st2;

//��������ʽ
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
�ܽ᣺
1.�ṹ����Ϊ�˱�ʾһЩ���ӵ��������ͨ�Ļ��������޷�������ʵ��Ҫ��
2.�ṹ����һЩ�����������������һ�����γɵ�һ���µĸ�����������
3.�ṹ���ǰ���ֱ�ʾ�����Ƚϳ��ã��Ƽ�ʹ�õ�һ��
*/