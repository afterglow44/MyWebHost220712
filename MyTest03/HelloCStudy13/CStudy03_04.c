#include<stdio.h>

void greenChar()
{
	system("color 0a");
}
void changeColor(char a, char b)
{

	char color[9] = "color ";

	color[6] = a;
	color[7] = b;
	color[8] = NULL;//'\0';
	system(color);
}
int main()
{

	greenChar();
	printf("ù��° ���� �Է�");
	char a;// = getchar();
	scanf_s("%c", &a, 1);
	rewind(stdin);
	printf("�ι�° ���� �Է�");
	char b;//; = getchar();
	scanf_s("%c", &b, 1);
	changeColor(a, b);
	return 0;
}