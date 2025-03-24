#include <cmocka.h>
#include "2_61.h"

static void test_funcA(void **state)
{
	assert_int_equal(func_A(100), 1);
	assert_int_equal(func_A(-100), 1);
	assert_int_equal(func_A(0), 0);
	assert_int_equal(func_A(56456), 1);
}
static void test_funcB(void **state)
{
	assert_int_equal(func_B(100), 1);
	assert_int_equal(func_B(-100), 1);
	assert_int_equal(func_B(~0), 0);
}
static void test_funcC(void **state)
{
	assert_int_equal(func_C(100), 1);
	assert_int_equal(func_C(-100), 1);
	assert_int_equal(func_C(-768), 0);
	assert_int_equal(func_C(-768), 0);
	assert_int_equal(func_C(256), 0);
	assert_int_equal(func_A(0), 0);
}
static void test_funcD(void **state)
{
	assert_int_equal(func_D(100), 1);
	assert_int_equal(func_D(-100), 1);
	assert_int_equal(func_D(~0), 0);
	assert_int_equal(func_D(20971520), 1);
	assert_int_equal(func_D(256), 1);
	assert_int_equal(func_D(255), 0);
	assert_int_equal(func_D(254), 1);
}
int main(void)
{
	const struct CMUnitTest tests[] = {
	    cmocka_unit_test(test_funcA),
	    cmocka_unit_test(test_funcB),
	    cmocka_unit_test(test_funcC),
	    cmocka_unit_test(test_funcD),
	};

	return cmocka_run_group_tests(tests, NULL, NULL);
}
