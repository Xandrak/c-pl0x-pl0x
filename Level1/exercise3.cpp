#include <iostream>
#include <vector>
#include <numeric>

// Compute the average of a vector of 4 numbers and print it to console

int main() 
{
    std::vector<double> numbers_list = {58, 20, 32, 19};
    double accumulation = std::accumulate(numbers_list.begin(), numbers_list.end(), 0.0);
    double average = 0;
    int numbers_list_size = numbers_list.size();

    if (numbers_list_size > 0) {
        average = accumulation / numbers_list_size;
    }

    std::cout << "Hey! We're going to take a list of numbers and compute their average!" << std::endl;
    std::cout << "First number: " << numbers_list.at(0) << std::endl;
    std::cout << "Second number: " << numbers_list.at(1) << std::endl;
    std::cout << "Third number: " << numbers_list.at(2) << std::endl;
    std::cout << "Fourth number: " << numbers_list.at(3) << std::endl;
    std::cout << "Average: " << average << std::endl;
}