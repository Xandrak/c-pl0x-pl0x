#include <iostream>

// Simply ask a user for two numbers, find their sum, and print it out to console.

int main()
{
    int first_num = 0;
    int second_num = 0;
    int sum = 0;

    std::cout << "Hello! Enter a number... or else! ";
    std::cin >> first_num;
    std::cout << "Awesome! Now, enter another number... if you dare! ";
    std::cin >> second_num;
    sum = first_num + second_num;
    std::cout << "The sum of your two numbers is " << sum << "!" << std::endl;

    return 0;
}