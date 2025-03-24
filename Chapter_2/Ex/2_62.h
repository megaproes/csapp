int int_shifts_are_arithmetic()
{
	int x = -1;
	int shifted = x >> 1;
	return shifted < 0;
}