#include<iostream>
using namespace std;

int main() {
    int a, b;
    int count = 0;
    cin>>a;
    while(a) {
        count++;
        b = a & -a;
        a -= b;
    }	
    cout<<count<<endl;
}
