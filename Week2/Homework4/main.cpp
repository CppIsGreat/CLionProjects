/**
 *  @file    main.cpp
 *  @author  Neil Burman (nburma01)
 *  @date    2017-10-15
 *  @version 1.0
 *
 *  @brief   Print a series of n Fibonacci numbers
 *
 *  @section Print Fibonacci numbers using static
 *  libraries.
 *
 */

#include <iostream> // std::cin, std::cout
#include <vector>   // std::vector

#include "Fiblib/Fiblib.hpp"        // fib
#include "VectOut/VectOut.hpp"      // OutputData

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

