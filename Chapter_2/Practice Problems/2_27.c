#include <stdio.h>

int uadd_ok(unsigned x, unsigned y)
{
	int sum = x + y;
	return sum > x || sum > y;
}

int main()
{
	printf("uadd_ok(2000000000, 2000000000) = %d\n", uadd_ok(2000000000, 2000000000)); // Expected 1
	printf("uadd_ok(2, 3) = %d\n", uadd_ok(2, 3));							   // Expected 1
	printf("uadd_ok(4294967295, 1) = %d\n", uadd_ok(4294967295, 1));				   // Expected 0 (overflow for 32-bit unsigned)
	return 0;
}
