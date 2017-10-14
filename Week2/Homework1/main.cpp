// Determine the nth Fibonacci number

#include <iostream>

// Fibonacci sequence

int Fib(int n)  {
    if (n < 2) return n;

    return (Fib(n - 2) + Fib(n - 1));
}

// main program

int main() {

    int fibNum {};

    std::cout << "Enter the nth Fibonacci sequence : ";
    std::cin >> fibNum;

    std::cout << "Fibonacci number " << fibNum << " is " << Fib(fibNum) << "\n";

}