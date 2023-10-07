/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "examples/autotest-validate/autotest-validate.h"
#include <stdbool.h>

/*=======External Functions This Runner Calls=====*/
extern void Test_assignment_validate_setUp(void);
extern void Test_assignment_validate_tearDown(void);
extern void test_assignment_validate();


/*=======Mock Management=====*/
static void CMock_Init(void)
{
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Setup (stub)=====*/
void Test_assignment_validate_setUp(void) {}

/*=======Teardown (stub)=====*/
void Test_assignment_validate_tearDown(void) {}

/*=======Test Reset Options=====*/
void Test_assignment_validate_resetTest(void);
void Test_assignment_validate_resetTest(void)
{
  Test_assignment_validate_tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  Test_assignment_validate_setUp();
}
void Test_assignment_validate_verifyTest(void);
void Test_assignment_validate_verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, int line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        Test_assignment_validate_setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        Test_assignment_validate_tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
 int Test_assignment_validate_main(void);
int Test_assignment_validate_main(void)
{
  UnityBegin("/home/pi/Desktop/Coursera/assignment-1-Kathan1391/assignment-autotest/test/assignment1/Test_assignment_validate.c");
  run_test(test_assignment_validate, "test_assignment_validate", 9);

  return UnityEnd();
}
