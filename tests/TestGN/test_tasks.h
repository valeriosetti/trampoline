 /* 
  * @file test_tasks.h
  * 
 * $Date: 2008/06/02 15:54:37 $
 * $Rev$
 * $Author: GuillaumeNuth $
 * $URL$
 */

#ifndef TEST_TASKS_H_
#define TEST_TASKS_H_

typedef struct __TaskManagement	TaskManagement;
typedef struct __TaskManagement*	TaskManagementRef;

/*struct which represent the object unless there is no real object*/
struct TaskManagement {
	int value;
};

/*allocate the object*/
TaskManagementRef taskManagement_alloc(void);

/*desallocate the object*/
void taskManagement_dealloc(TaskManagementRef);

/*reference to the suite of test created*/
TestRef TaskManagementTest_tests(void);

/*reference to the functions wich run the test*/
void test(void);

/*external definition of the function to the
 * redirection for the output of the test*/
void stdimpl_print(const char* string);

#endif /*TEST_TASKS_H_*/