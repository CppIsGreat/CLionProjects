#include <iostream>


std::string say_hello(const std::string& inputName)
{
    const std::string greeting {"Hello"};

    return(greeting + ' ' + inputName);
}

int main() {


    std::string name {""};

    std::cout << "Hey what's your name? ";
    std::cin >> name;

    std::cout << say_hello(name) << std::endl;

    return (EXIT_SUCCESS);
}