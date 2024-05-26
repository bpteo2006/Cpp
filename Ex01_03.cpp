#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<double> list = {1.1, 2.2, 3.3, 4.4};

    float sum = std::accumulate(list.begin(), list.end(), 0.0);

    float avg = sum/list.size();

    std::cout << "The average of lists is " << avg;

    return 0;

}