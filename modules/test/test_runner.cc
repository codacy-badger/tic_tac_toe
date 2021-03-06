/*
 * file: test_runner.cc
 * author: Michael Brockus
 * gmail: <michaelbrockus@gmail.com>
 */
#include <unity.h>

/*
 *  Prototype functions for setup and teardown.
 */
extern void setUp();
extern void tearDown();

/*
 *  Prototype functions from the external test file.
 */
extern void test_validGridChar();
extern void test_validOpponentMarker();

/*
 *  This function runs test from the external test
 *  file.
 */
int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_validGridChar);
    RUN_TEST(test_validOpponentMarker);

    return UNITY_END();
} //end of function main