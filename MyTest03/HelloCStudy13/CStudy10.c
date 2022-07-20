#include<stdio.h>
int main()
{
	int n;
	printf("몇 번째 수열을 구하실건가요?\n");
	scanf_s("%d", &n);

	int result = ten(n);
	ten(n);//함수를 불러오는 것

	return 0;
}
int ten(int n)
{
	int t0 = 0;
	int t1 = 1;
	int next = t0 + t1;
	
	printf("%d ", t1);
	for (int i = 2; i <= n; i++)
	{
		next = t0 + t1;
		printf("%d ", next);
		t0 = t1;
		t1 = next;	
	}
	return 0;

}