#include <string.h>
#include <stdio.h>
#include "uart.h"

int sub(int a, int b)
{
	return a - b;
}

int main(void)
{
	static int a = 5, b = 3, result;
	static char msg[20] = "uart msg buf\n";

	result = sub(a, b);

	printf("sub result = %d\n", result);

	uart_tx(msg);

    return 0;
}
