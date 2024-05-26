#include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;

    std::cout << "Please enter an integer : ";
    std::cin >> num1;
    std::cout << "Please enter another integer : ";
    std::cin >> num2;

    std::cout << "The sum of the two numbers is " << num1 + num2;

    return 0;
}