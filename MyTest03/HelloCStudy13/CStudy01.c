int sum_a_to_b(int a, int b, int c)
{

	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		if (i % c != 0) //c의 배수 제외  
			sum += i;
		//sum = sum + i;
	}
	return sum;
}
#include<stdio.h>
int main()
{

	int a, b, c;
	printf("a,b,c 값을 입력하세요.");
	scanf_s("%d %d %d", &a, &b, &c);

	printf("%d부터 %d까지의 합(%d 배수 제외)\n",
		a, b, c);
	int result = sum_a_to_b(a, b, c);
	printf("결과 : %d\n", result);




	return 0;
}