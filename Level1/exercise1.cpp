#include <iostream>

// Simply ask a user for their name and age and print it out to console.

int main() 
{
    int user_age = 0;
    std::string user_name = "";

    std::cout << "Hello! What is your name? ";
    std::cin >> user_name;
    std::cout << "Awesome! Nice to meet you, " << user_name << " how old are you? ";
    std::cin >> user_age;
    std::cout << "Great! You are " << user_age << " years old." << std::endl;

    return 0;
}