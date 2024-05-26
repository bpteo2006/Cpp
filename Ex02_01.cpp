#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string user_name;
    int age;
    cout << "Please enter your name: ";
    // cin >> user_name;
    getline(cin, user_name);
 
    cout << "How old are you ? ";
    cin >> age;
    cout << "Hello, " << user_name << ". You're " << age << endl;

    return 0;
}