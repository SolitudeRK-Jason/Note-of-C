# include <stdio.h>

int main(void) {
	char ch = 'A';
	int i = 99;
	double x = 66.6;
	char* p = &ch;
	int* q = &i;
	double* r = &x;

	printf("%d %d %d\n",sizeof(p),sizeof(q),sizeof(r));
	return 0;
}
/*
在visio studio中输出结果为
————————————————
4 4 4
————————————————
总结：
1.sizeof函数的功能是返回值为括号里变量所占的字节数
以变量x为例，指针变量r保存的是x变量8个字节的第一个字节的地址，第一个字节占一个字节，但是该字节的地址用四个字节表示
因为地址总线为32根线，所以每个指针变量用32根地址线的不同状态表示即为32位,每个字节占8位，就是4个字节也就是指针变量都占4个字节
*/