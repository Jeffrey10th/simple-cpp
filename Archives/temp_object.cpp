#include <iostream>

int main() {

    int i_input = 0;
    int dval = 2.5;

    std::cout << "Welcome to the TEMP-OBJECT program. Please enter an integer: " << std::endl;
    std::cin >> i_input;

    const int &iref = i_input;
    const int &iref2 = 55;
    const int &iref3 = dval;

}
