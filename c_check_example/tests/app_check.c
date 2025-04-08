#include <check.h>
#include <stdlib.h>
#include <stdio.h>

#include "../common.h"

START_TEST(test_new_app)
{
    ck_assert_uint_eq(get_value(1), 0);
    printf(" [PASS] Test: In 1 Out 0 \n");

    ck_assert_uint_eq(get_value(11), -1);
    printf(" [PASS] Test: In 11 Out -1 \n");
} END_TEST

Suite *app_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("AppTest");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_new_app);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void)
{
    Suite *s = app_suite();
    SRunner *runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    int no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}