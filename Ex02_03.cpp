#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    using namespace std;
    vector<double> list = {1.1, 2.2, 3.3, 4.4};
    double sum = accumulate(list.begin(), list.end(), 0.0);
    double average = sum/list.size();
    cout << "The average of list is " << average << endl;
    return 0;
}