#include <stdio.h>
int bis(int x, int m)
{
	return x | m;
}
int bic(int x, int m)
{
	return x & (~m);
}

/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y)
{
	int result = bis(x, y);
	return result;
}
/* Compute x^y using only calls to functions bis and bic */ // x^y =  
// int bool_xor(int x, int y)
// {
// 	int result = bic();
// 	return result;
// }
int main(int argc, char const *argv[])
{
	printf("%.8X\n", 68 & (~100));
	return 0;
}
