#include <iostream>

int main() {

    int inNumber {};

    std::cout << "Please input a number : ";
    std::cin >> inNumber;

    // 3 and 5 are co-primes so make divisible by 15

    if (inNumber % 3 == 0 && inNumber % 5 == 0) {
        std::cout << "fizzbuzz1\n";
    } else if (inNumber % 3 == 0) {
        std::cout << "fizz\n";
    } else if (inNumber % 5 == 0) {
        std::cout << "buzz\n";
    } else {
        std::cout << "not fizzy or buzzy\n";
    }
}