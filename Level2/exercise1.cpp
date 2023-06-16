#include <iostream>

using namespace std;

// Rewrite the exercise1 from level 1 using functions and the std namespace

string requestUserName() {
    string user_name;

    cout << "Please enter your name! ";
    cin >> user_name;

    return user_name;
}

int requestUserAge() {
    int user_age;

    cout << "Now, enter your age, please! ";
    cin >> user_age;

    return user_age;
}

void printUserNameAndAge(string name, int age) {

    cout << "Aha! Your name is " << name << ", and you are " << age 
            << " years old. Gotcha!" << endl;

}

int main() {

    string userName = requestUserName();
    int userAge = requestUserAge();

    printUserNameAndAge(userName, userAge);

    return 0;
}