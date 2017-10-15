/**
 *  @file    VectOut.cpp
 *  @author  Neil Burman (nburma01)
 *  @date    2017-10-15
 *  @version 1.0
 *
 *  @brief   Print out the contents of an int vector
 *
 *  @section Print out the contents of an int vector
 *
 */

#include <iostream> // std::cout
#include <vector>   // std::vector

// Output vector of ints to the console on one line
void OutputData(std::vector<int>& vectorData) {
    for (auto dataItem : vectorData)
    {
        std::cout << dataItem << " ";
    }

    // Blank line
    std::cout << "\n";
}