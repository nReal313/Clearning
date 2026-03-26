#include<stdio.h>



int increase(int *p) {
    *p = *p + 1; // * here dereferences the value of the pointer ie goes to the variable of which p was holding the value of. Ultimately whatever address p was storing, the value of that has increased by 1.
    return *p;
}


int main(void) {
    
    int a = 1; //normal variable
    printf("Value of the variable 'a' is : %d\n", a); // should print out 1
    int *p = &a; // p is a pointer of the type int ie it stores address of variables of the type 'int'. Here the ampersand spits out the address of the variable 'a'
    int k = increase(p); 
    printf("Value of the variable 'a' now is : %d\n", a); // should print out 2 because the pointer that was pointing to the address of variable 'a' was dereferenced in the func and incremented by 1
    return 0;
}
