/**
Author: Shiyao Qi  
Function: Calculate the great common dividor of two numbers.  
Date: 2014.04.01
*/

/*
Recursive implementation.
*/
int GCD1(int a, int b) {
	if(0 == b) {
		return a;
	}
	else
		return GCD1(b, a % b);
}

/*
While implementation.
*/
int GCD2(int a, int b) {
	while(b != 0) {
		int r = b;
		b = a % b;
		a = r;
	}
	return a;
}
