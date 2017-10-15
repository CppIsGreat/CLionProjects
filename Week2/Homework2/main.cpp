// Determine the nth Fibonacci number

#include <iostream>
#include <vector>

// Fibonacci sequence - the classic recursive solution

int FibGet(int n)  {
    if (n < 2) return n;

    return (FibGet(n - 2) + FibGet(n - 1));
}

// Put the numbers into a vector
std::vector<int> fib(const int& n){

    std::vector<int> fibNums {};

    for (auto iCount = 0; iCount <= n; iCount++)
    {
        fibNums.emplace_back(FibGet(iCount));
    }

    return(fibNums);
}

// main program

int main() {

    int fibSeqNumber {};

    std::cout << "Enter the sequence number : ";
    std::cin >> fibSeqNumber;

    std::vector<int> fibNumbers = fib(fibSeqNumber);

    for (auto fibNumber : fibNumbers)
    {
        std::cout << fibNumber << "\n";
    }

}