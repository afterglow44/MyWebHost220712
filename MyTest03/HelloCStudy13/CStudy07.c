#include<stdio.h>
int main()
{
	printf("숫자 두 개와 기호를 입력하세요.\n");
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