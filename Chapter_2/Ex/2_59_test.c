#include <cmocka.h>
#include "2_59.h"

static void test_simple(void **state)
{
	int x = 0x89ABCDEF;
	int y = 0x76543210;
	assert_int_equal(0x765432EF, replace_significant(x, y));

	int x2 = 0x58000045;
	int y2 = 0x76000088;
	assert_int_equal(0x76000045, replace_significant(x2, y2));

	int x3 = 0x00000099;
	int y3 = 0x00010188;
	assert_int_equal(0x00010199, replace_significant(x3, y3));
}

int main(void)
{
	const struct CMUnitTest tests[] = {
	    cmocka_unit_test(test_simple),
	};

	return cmocka_run_group_tests(tests, NULL, NULL);
}
