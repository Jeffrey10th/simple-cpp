#include <iostream>

int main() {

    int i = 1024;
    //this is a pointer
    int *pi = &i;

    int i2 = 2048;
    *pi = i2;

    pi = &i2;

    //test if pointers are an object itself. the following code will create an object and pointer of double
    double d = 3.14, *pd = &d;

    //assign pd to void pointer
    void *pv = pd;

    //change value of d, thus changing value of pd
    d = 5.14;

    //test if pv now points to the same memory address as pd
    std::cout << (pv == pd) << std::endl;
}