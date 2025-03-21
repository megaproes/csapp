#include <cmocka.h>
#include "2_60.h"

static void test_simple(void **state)
{
	assert_int_equal(0x12AB5678, replace_byte(0x12345678, 2, 0xAB));
	assert_int_equal(0x123456AB, replace_byte(0x12345678, 0, 0xAB));
}

int main(void)
{
	const struct CMUnitTest tests[] = {
	    cmocka_unit_test(test_simple),
	};

	return cmocka_run_group_tests(tests, NULL, NULL);
}
