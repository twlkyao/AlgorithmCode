#include<iostream>
using namespace std;

int main(){
	bool index = true; // there are no boolean type in C, you should use <stdbool.h> to use the boolean type in C.
	cout<<index<<endl; // 1
	
	index ^= true;
	cout<<index<<endl; // 0
	
	index = !index;
	cout<<index<<endl; // 1
	
	index = ~index; // still true, since this is bit operation, still true.
	cout<<index<<endl; // 1
	return 0;
}
