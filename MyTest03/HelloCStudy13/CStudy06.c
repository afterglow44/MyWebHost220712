#include<stdio.h>
int main()
{
	printf("몇 까지 곱하시겠습니까? ");

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