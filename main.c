#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	static int a = 5;
	static int b = 5;
	static int result;

	result = add(a, b);

	printf("%d + %d = %d\n", a, b, result);

    return 0;
}
