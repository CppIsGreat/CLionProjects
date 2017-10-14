#include <iostream>

int main() {

    std::string response {};

    int inNumber {0};

    std::cout << "Please enter a number: ";
    std::cin >> inNumber;

    if (inNumber % 3 == 0)
        response += "fizz";

    if (inNumber % 5 == 0)
        response += "buzz";

    if (response.empty() || inNumber == 0)
        response = "neither fizz nor buzz";

    std::cout << response << "\n";

}