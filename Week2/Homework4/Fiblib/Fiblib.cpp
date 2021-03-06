/**
 *  @file    Fiblib.cpp
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

#include <vector>   // std::vector

// Function to swap two integer values
void Swap(int& int1, int& int2){

    // Set up the intermediate variable
    int iTemp = int2;

    int2 = int1;
    int1 = iTemp;
}

// Generate the Fibonacci number
std::vector<int> fib (int& n, int i1 = 0, int i2 = 1 )
{
    // Initialise the vector with the first number
    std::vector<int> fibNums {i1};

    // The first number should be smaller than the second
    // so swap them over if this is not the case
    if (i1 > i2)
        Swap(i1, i2);

    // Loop to get the Fibonacci number
    for (auto i = 1; i < n; i++){

        int iTotal = i1 + i2;

        // If the user puts something wacky in like 0, 0
        // there's no point in continuing
        if (iTotal == 0)
            break;

        i1 = i2;
        i2 = iTotal;

        // Save the number in the vector
        fibNums.emplace_back(iTotal);

    }

    // Return the vector
    return(fibNums);
}
