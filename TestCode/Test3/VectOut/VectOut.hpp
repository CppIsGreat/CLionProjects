//
// Created by Neil on 15/10/2017.
//

#pragma once

#ifndef VECTOUT_HPP
#define VECTOUT_HPP

#include <vector>   // std::vector

// Dump vectors of any type

// Experimental - template
template<class TYPE>
void DumpVector(const std::vector<TYPE> &data) {
    // Dump out the returns for debugging
    for (auto dataMember : data) {
     std::cout << dataMember << "\n";
    }
}

// Output vector of ints to the console
void OutputData(std::vector<int>&);


#endif //VECTOUT_HPP
