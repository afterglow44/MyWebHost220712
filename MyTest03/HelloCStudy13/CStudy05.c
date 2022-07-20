#include<stdio.h>
int main()
{
	int result = one();
	printf("=%d", result);

	return 0;
}

int one()
{
	printf("100 까지 더하시겠습니다\n");

	int sum = 1;

	printf("1");
	for (int i = 2; i <= 100; i++)
	{
		sum += i;
		printf("+%d", i);
	}


	return sum;
}