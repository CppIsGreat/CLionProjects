#include <iostream>
#include <vector>


std::string get_name()
{
    std::string inName {};

    std::cout << "What's your name? ";
    std::cin >> inName;

    return(inName);
}

std::string say_hello(const std::string& inputName)
{
    const std::string greeting {"Hello"};

    return(greeting + ' ' + inputName + '!');
}

int main() {

    const std::string unknownName {"Stranger"};
    bool nameFound {false};

    std::vector<std::string> nameList {};
    std::string inName {};

    // Set up the names to verify against
    nameList.emplace_back("Tom");
    nameList.emplace_back("Phil");
    nameList.emplace_back("Tristan");

    // Get the name
    inName = get_name();

    for (const auto& name : nameList)
    {
        if (inName == name) {
            std::cout << say_hello(inName) << "\n";
            nameFound = true;
            break;
        }
    }

    if (!nameFound)
    {
        std::cout << say_hello(unknownName) << "\n";
    }

    return (EXIT_SUCCESS);
}