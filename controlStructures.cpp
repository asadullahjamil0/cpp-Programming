#include <iostream>

int main() {
    int number = 10;

    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "i = " << i << std::endl;
    }

    int j = 0;
    while (j < 5) {
        std::cout << "j = " << j << std::endl;
        ++j;
    }

    return 0;
}
