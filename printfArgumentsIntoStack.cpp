#include<iostream>
using namespace std;
int i = 1;
int main()
{
	int arr[] = { 6, 7, 8, 9, 10 };
	int *ptr = arr;
	*(ptr++) += 123;
	
	// printf() read from right to left, the first read argument goes to top of the stack,
        // the last read argument goes to bottom of the stack, and then the arguments are popped out.
        // in the following code, the second argument is calculated before pushed into the stack.
        // there are five types of push arguments into stack. More info:
        // http://www.cnblogs.com/xkfz007/archive/2012/03/27/2420158.html
        printf("%d,%d\n", *ptr, *(++ptr));
	return 0;
}
