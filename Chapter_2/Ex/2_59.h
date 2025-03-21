int replace_significant(unsigned x, unsigned y)
{
	return (y & ~0xFF) | (x & 0xFF);
}