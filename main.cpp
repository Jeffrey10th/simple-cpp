#include <iostream>

int main() {

    int i = 1024;
    //this is a pointer
    int *pi = &i;

    int i2 = 2048;
    *pi = i2;

    pi = &i2;

}