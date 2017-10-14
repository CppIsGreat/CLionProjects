// String sizes and lambda functions

#include <iostream>
#include <vector>

int main() {

    // String sizes
    const std::string text {"This is a test"};
    std::cout << text.size() << "\n";

    // Lambda functions
    auto func = [] () { std::cout << "Hello world\n"; };
    func(); // now call the function

    // Another lambda function
    // Set up data
    std::vector<int> v;
    v.emplace_back( 1 );
    v.emplace_back( 2 );

    // Print using a lambda function
    for_each( v.begin(), v.end(), [] (int val)
    {
        std::cout << val << "\n";
    } );

    // Not a lambda function
    for ( auto val : v) {
        std::cout << val << "\n";
    }


    return (EXIT_SUCCESS);
}