#include <iostream>
#include <string>

int main()
{
    // Declare a variable to store the user's name
    std::string name;

    // Prompt the user to enter their name
    std::cout << "Enter your name: ";

    // Read the user's input and store it in the 'name' variable
    std::getline(std::cin, name);

    // Print a greeting using the entered name
    std::cout << "Hello, " << name << "! Welcome to C++ programming." << std::endl;

    // Return 0 to indicate successful execution
    return 0;
}
