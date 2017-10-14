#include <iostream> // std::cout
#include <vector>

std::string say_hello(const std::string& inputName)
{
    const std::string greeting {"Hello"};

    return(greeting + ' ' + inputName);
}

int main() {

    // The original solution
    //std::vector<std::string> nameList {};

    //nameList.emplace_back("Tom");
    //nameList.emplace_back("Phil");
    //nameList.emplace_back("Tristan");

    //for (unsigned int iCount = 0; iCount < nameList.size(); iCount++)
    //{
    //    std::cout << say_hello(nameList.at(iCount)) << "\n";
    //}

    // The new solution
    const std::vector<std::string> nameList {"Tom", "Phil", "Tristan"};

    // Note that the loop variable is now a reference
    for (const auto &name : nameList) {
        std::cout << say_hello(name) << "\n";
    }

    return (EXIT_SUCCESS);
}