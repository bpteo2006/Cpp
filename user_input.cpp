#include <iostream>
#include <string>

int main()
{
    std::string user_name;
    std::cout << "What is your name ? ";
    std::cin >> user_name;
    //std::getline(std::cin, user_name); 
    std::cout << "Hello, " << user_name << "!" << std::endl;
    return 0;
}