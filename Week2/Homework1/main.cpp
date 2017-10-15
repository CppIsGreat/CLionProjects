#include <iostream>

// Remove the &
std::string get_hello()
{
    std::string str = "Hello";
    return (str);
}

// This is probably not good
void get_hello(std::string& str)
{
    str = "Hello";
}

int main() {

    std::cout << get_hello() << std::endl;

    std::string test {};
    get_hello(test);

    std::cout << test << std::endl;

}