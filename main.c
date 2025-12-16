#include <string.h>
#include <stdio.h>

int sub(int a, int b)
{
	return a - b;
}

int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	static int a = 5, b = 3, result;

	result = sub(a, b);

	printf("sub result = %d\n", result);

	a = 5;
	b = 5;
	result = add(a, b);

	printf("add result %d + %d = %d\n", a, b, result);

    return 0;
}
