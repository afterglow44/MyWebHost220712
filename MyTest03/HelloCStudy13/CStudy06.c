#include<stdio.h>
int main()
{
	printf("�� ���� ���Ͻðڽ��ϱ�? ");

	int n;
	scanf_s("%d", &n);

	int result = six(n);
	
	printf("=%d", result);

	return 0;
}

int six(int n)
{
	int sum = 1;
	printf("1");
	for (int i = 2; i <= n; i++)
	{
		printf("x%d", i);
		sum *= i;
	}
	
	return sum;
}