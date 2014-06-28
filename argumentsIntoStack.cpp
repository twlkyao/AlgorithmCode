#include<iostream>
using namespace std;
int i = 1;
int main()
{
	int arr[] = { 6, 7, 8, 9, 10 };
	int *ptr = arr;
	*(ptr++) += 123;
	
	// printf() read from left to right, the first read arguments go to bottom of the stack,
        // the last read arguments go to top of the stack, and then the arguments are popped out.
        // that is the order of the arguments are dealt from right to left.
 	printf("%d,%d\n", *ptr, *(++ptr));
	return 0;
}
