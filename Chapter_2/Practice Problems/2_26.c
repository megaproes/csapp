#include <string.h>
#include <stdio.h>
/* Determine whether string s is longer than string t */
/* WARNING: This function is buggy */
int strlonger(char *s, char *t)
{
	return strlen(s) - strlen(t) > 0;
}

int main(void)
{
	// A: cases where strlonger will return incorrect results:
	printf("return > ret? -- %d\n", strlonger("return", "ret"));
	printf("ret > return? -- %d\n", strlonger("ret", "return"));
	// --> that is, where 's' < 't' strlonger will produce incorrect results

	// B: This is because strlen(s) - strlen(t) will result into two's complete negative but
	// then will be converted into long unsigned huge number, that is of course higher then 0

	// C:
	// return (int)(strlen(s) - strlen(t)) > 0;

	return 1;
}