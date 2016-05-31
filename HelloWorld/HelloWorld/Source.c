#include <stdio.h>
#include <GL\GL.h>
#define ADD(a,b) ((a)+(b))

int main()
{
	int a = 10;
	int b = 40;
	int c = ADD(1, b);
	printf("Hello, Wrodld!\n");
	printf("%d", c);
	system("pause");
	return 0;
}