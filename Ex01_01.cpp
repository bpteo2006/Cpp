#include <iostream>
#include <string>

int main()
{
    std::string input_name;
    int input_age;
    std::cout << "Please enter name : ";
    //std::cin >> input_name; // A one word name
    std::getline(std::cin, input_name); // Use std::getline to read a full line of input
    std::cout << "What is your age : ";
    std::cin >> input_age;
    std::cout << "Hello, " << input_name << "!"  << " You're " << input_age <<"." << std::endl;
    return 0;
}