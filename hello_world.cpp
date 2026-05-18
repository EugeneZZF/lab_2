#include <iostream>
#include <string>

// Main program function
int main() {

    // Variable for storing user name
    std::string name;

    // Asking user for name
    std::cout << "Enter your name: ";
    std::cin >> name;

    // Output greeting
    std::cout << "Hello world from " << name;

    return 0;
}