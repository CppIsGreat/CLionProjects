#include <iostream>


std::string FizzMyBuzzBaby (const int& inNumber)
{
    if (inNumber != 0) {
        if (inNumber % 15 == 0)
            return ("fizzbuzz");
        if (inNumber % 3 == 0)
            return ("fizz");
        if (inNumber % 5 == 0)
            return ("buzz");
    }
    return ("neither fizz nor buzz");

}

int main() {

    int inNumber {};

    std::cout << "Please enter a number: ";
    std::cin  >> inNumber;

    std::cout << FizzMyBuzzBaby(inNumber) << "\n";
}