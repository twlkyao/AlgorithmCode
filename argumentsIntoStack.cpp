#include<iostream>
using namespace std;
int i = 1;
int main()
{
	int arr[] = { 6, 7, 8, 9, 10 };
	int *ptr = arr;
	*(ptr++) += 123;
	printf("%d,%d\n", *ptr, *(++ptr)); // the arguments are pushed into a stack, so the last one is the first to execute.
	return 0;
}
