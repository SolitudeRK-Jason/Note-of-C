/*
2021��10��19��20:49:32
Ŀ�ģ��ж�һ�����Ƿ�Ϊ����
*/
# include <stdio.h>
bool IsPrime(int val)
{
	int i;

	for (i = 2; i < val; ++i)
	{
		if (0 == val % i)   //ע���������� ��ֵ == ���ʽ  �ĺ�ϰ�ߣ���Ϊ������дһ���Ⱥų���ᱨ�����Ƿ�������дһ���Ⱥų��򲻻ᱨ�����������Ѷȣ����䵱�������ܴ�ʱ��
			break;
	}
	if (i == val)
		return true;
	else
		return false;
}
int main(void)
{
	int m;  //Ҳ������val

	scanf_s("%d", &m);
	if (IsPrime(m))
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
/*
��visio studio��������Ϊ
--------------------------
5
Yes
--------------------------
�ܽ᣺�����Ĺ���Ӧ�����ܵ�һ
�����������͵ı����������β���ͬ����Ϊ������ͬ
*/