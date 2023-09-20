/*
2021年12月19日18:57:11
目的：了解枚举的用法
*/
# include <stdio.h>

enum weekday {
	Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};

int main(void) {
	enum weekday day = Wednesday;

	printf("%d\n",day);
	return 0;
}
/*
在visio studio中输出结果为
——————————————
2
——————————————
总结：enum weekday是定义了一个数据类型
而Monday到Sunday在C语言中默认为0-6所以输出时用的是%d
*/