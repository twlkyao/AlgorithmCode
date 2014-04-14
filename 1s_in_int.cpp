/*
 * Algorithm: Delete the last bit of 1 step by step, until the number is zero.
 */
// First implementation.
#include<stdio.h>

int main() {
    int a, b;
    int count = 0;
    scanf("%d", &a);
    while(a) {
        count++;
        b = a & -a; // The last bit of 1.
        a -= b; // Minus the last bit of 1.
    }	
    printf("%d\n", count);
}

// Second implementation.
#include<stdio.h>    
    
int main() {    
    int a, b;    
    int count = 0;    
    scanf("%d", &a);    
    while(a) {    
        count++;    
        a &= (a -1); // Minux the last bit of 1.
    }    
    printf("%d\n", count);    
}
