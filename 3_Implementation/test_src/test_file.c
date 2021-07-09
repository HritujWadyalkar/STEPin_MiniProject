#include "prototypes.h"
#include "unity.h"

void setUp() {}
/* Required by the unity test framework */
void tearDown() {}

void opendigitalClock(void)
{
    TEST_ASSERT_EQUAL(SUCCESS, digitalClock());
}

void opencountdownTimer(void)
{
    timer t1 = {0, 3};
    TEST_ASSERT_EQUAL(SUCCESS, countdownTimer(&t1));
}

void testsetTime(void)
{
    timer t = {10, 10};
    TEST_ASSERT_EQUAL(SUCCESS, setTime(&t));
    /*timer t1 = {-10, -10};
    TEST_ASSERT_EQUAL(OUTOFBOUND_ERROR, setTime(&t1));*/
    timer t2 = {10, 61};
    TEST_ASSERT_EQUAL(OUTOFBOUND_ERROR, setTime(&t2));
    timer t3 = {61, 10};
    TEST_ASSERT_EQUAL(OUTOFBOUND_ERROR, setTime(&t3));
    TEST_ASSERT_EQUAL(NULL_ERROR, setTime(NULL));
}

void testgetcurrentdate(void)
{
    int currentday, currentmonth, currentyear;
    TEST_ASSERT_EQUAL(SUCCESS, getcurrentdate(&currentday, &currentmonth, &currentyear));
}

void testbubblesort(void)
{
    int numberoftasks = 2;
    event e1;
    temp t1;
    TEST_ASSERT_EQUAL(SUCCESS, bubblesort(&e1, &numberoftasks));
    TEST_ASSERT_EQUAL(NULL_ERROR, bubblesort(NULL, &numberoftasks));
    TEST_ASSERT_EQUAL(NULL_ERROR, bubblesort(&e1, NULL));
}

void testfinddaysleft(void)
{
    int currentyear = 2021;
    event e = {"Hello", 22, 8, 2021, 0};
    int numberoftasks = 1;
    int currentmonth = 7;
    int currentDay = 9;
    TEST_ASSERT_EQUAL(SUCCESS, finddaysleft(&e, &numberoftasks, &currentmonth, &currentDay, &currentyear));
    TEST_ASSERT_EQUAL(NULL_ERROR, finddaysleft(NULL, &numberoftasks, &currentmonth, &currentDay, &currentyear));
    TEST_ASSERT_EQUAL(NULL_ERROR, finddaysleft(&e, NULL, &currentmonth, &currentDay, &currentyear));
}

void testprintevent(void)
{
    event e = {"Hello", 22, 8, 2021, 30};
    int numberoftasks = 1;
    TEST_ASSERT_EQUAL(SUCCESS, printevent(&e, &numberoftasks));
    TEST_ASSERT_EQUAL(NULL_ERROR, printevent(&e, NULL));
    TEST_ASSERT_EQUAL(NULL_ERROR, printevent(NULL, &numberoftasks));
}

void testlogevent(void)
{
    event e = {"Hello", 22, 8, 2021, 30};
    int numberoftasks = 1;
    TEST_ASSERT_EQUAL(SUCCESS, logevent(&e, &numberoftasks));
    TEST_ASSERT_EQUAL(NULL_ERROR, logevent(&e, NULL));
    TEST_ASSERT_EQUAL(NULL_ERROR, logevent(NULL, &numberoftasks));
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(opendigitalClock);
    RUN_TEST(testsetTime);
    RUN_TEST(opencountdownTimer);
    RUN_TEST(testgetcurrentdate);
    RUN_TEST(testbubblesort);
    RUN_TEST(testfinddaysleft);
    RUN_TEST(testprintevent);
    RUN_TEST(testlogevent);

    /* Close the Unity Test Framework */
    return UNITY_END();
}