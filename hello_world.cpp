#include <iostream>
#include <string>

// Main program function
int main() {

    // Variable for storing user name
    std::string name;

    // Asking user for name
    std::cout << "Enter your name: ";
    std::cin >> name;

    // Print greeting message
    std::cout << "Hello world from " << name;

    return 0;
}
