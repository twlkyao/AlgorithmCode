#include<iostream>
using namespace std;
int i = 1;
void foo(int x, int y, int z) {
	cout<<"x="<<x<<" at ["<<&x<<"]"<<endl;
	cout<<"y="<<y<<" at ["<<&y<<"]"<<endl;
	cout<<"z="<<z<<" at ["<<&z<<"]"<<endl;
}

int main(int argc, char *argv[]){
	// the function's arguments into stack's order is right to left, 
	//the stack bottom's address is bigger than the top.
 	foo(100, 200, 300); 
    return 0;
}
