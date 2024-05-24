/*
 * test_driver1.c
 *
 *  Created on: 24-May-2024
 *      Author: Prasad Ghole
 */

#include "unity.h"

#include "driver1.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_print_usage()
{
	TEST_ASSERT_EQUAL_INT32(print_usage(),6);
}

int main(void)
{
    UNITY_BEGIN();

//    RUN_TEST(test_AverageThreeBytes_should_AverageMidRangeValues);
//    RUN_TEST(test_AverageThreeBytes_should_AverageHighValues);
    	RUN_TEST(test_print_usage);
//    RUN_TEST(test_productInfo);


    return UNITY_END();
}
