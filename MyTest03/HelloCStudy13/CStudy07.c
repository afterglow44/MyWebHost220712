#include<stdio.h>
int main()
{
	printf("���� �� ���� ��ȣ�� �Է��ϼ���.\n");
	int a, b;
	char c;
	scanf_s("%d %d %c", &a, &b, &c);

	int result = seven(a,b,c);
	printf("%d\n", result);

	return 0;
}
int seven(int a, int b, char c)
{
	int sum;
	if (c == '+')
	{
		sum = 0;
		for (int i = a; i <= b; i++)
		{
			sum += i;
		}
	}
	else if (c == '*' || c == 'x' || c == 'X')
	{
		sum = 1;
		for (int i = a; i <= b; i++)
		{
			sum *= i;
		}
	}
	else
		return -1;
	
	return sum;
}