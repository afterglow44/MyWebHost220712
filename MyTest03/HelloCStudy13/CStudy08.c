#include<stdio.h>
int main()
{
	int n;
	printf("n을 입력하시오.");
	scanf_s("%d", &n);
	int result = eight(n);
	printf("%d", result);
	return 0;
}
int eight(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}
