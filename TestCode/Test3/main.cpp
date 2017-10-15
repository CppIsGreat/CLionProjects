// Determine the nth Fibonacci number


#include <iostream>
#include <vector>

#include "Fiblib/Fiblib.hpp"

 // Output vector of ints to the console
void OutputData(std::vector<int>& vectorData) {
    for (auto dataItem : vectorData)
    {
        std::cout << dataItem << " ";
    }

    // Blank line
    std::cout << "\n";
}

// Main program
int main(){

    int fibSeqNumber = {};
    std::cout << "Enter the sequence number : ";
    std::cin >> fibSeqNumber;

    std::vector<int> fibNumbers {};

    // Try with all parameters
    fibNumbers = fib(fibSeqNumber, 0, 1);
    OutputData(fibNumbers);

    // Try less one
    fibNumbers = fib(fibSeqNumber, 0);
    OutputData(fibNumbers);

    // Try only one
    fibNumbers = fib(fibSeqNumber);
    OutputData(fibNumbers);

}

