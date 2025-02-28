#include <stdio.h>
void inplace_swap(int *x, int *y)
{
	// if (x == y)
	// 	return;
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

void reverse_array(int a[], int cnt)
{
	int first, last;
	for (first = 0, last = cnt - 1; first != last; first++, last--)
		inplace_swap(&a[first], &a[last]);
}

int main(int argc, char const *argv[])
{
	int array[5] = {1, 2, 3, 4, 5};
	reverse_array(array, 5);

	for (size_t i = 0; i < 5; i++)
	{
		printf("%d ", array[i]);
	}
	putchar('\n');

	// A: at the last iteration they're the same.
	// B: because XOR'ing the same values evaluates to zero.
	// C: change end condition to first != last, that is skipping the very last non nessesary iteration.
	return 0;
}
