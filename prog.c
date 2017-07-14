#include <stdio.h>
#include "calc_sum.h"

int mean(int a, int b)
{
	return (a + b) / 2;
}

int main()
{
	return printf("%d", sum(5, 6));
}
