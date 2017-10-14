// Input a name then find it in a list
// The more elegant version

#include <algorithm>    // std::any_of
#include <iostream>     // std::cout, std::cin
#include <vector>       // std::vector

// Get a name from the console
std::string get_name()
{
    std::string inName {};

    std::cout << "What's your name? ";
    std::cin >> inName;

    return(inName);
}

// Function to print name to the console
std::string say_hello(const std::string& inputName)
{
    const std::string greeting {"Hello"};

    return(greeting + ' ' + inputName + '!');
}

int main() {

    const std::string unknownName {"Stranger"};
    const std::vector<std::string> nameList {"Tom", "Phil", "Tristan"};

    // Initialise the input name
    std::string inName {};

    // Get the name
    inName = get_name();

    // Find the name in the list
    //if (std::find(nameList.begin(), nameList.end(), inName) != nameList.end()) // <-- One possible way of finding
    if (std::any_of(nameList.begin(), nameList.end(), [inName](std::string searchName) {return searchName == inName;}))
    {
        std::cout << say_hello(inName) << "\n";
    }
    else
    {
        std::cout << say_hello(unknownName) << "\n";
    }

    return (EXIT_SUCCESS);
}