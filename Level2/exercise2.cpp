#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Rewrite the exercise2 from level 1 using functions and the std namespace

int requestANumber(string num_request) {
    int num;

    cout << num_request;
    cin >> num;

    return num;
}

void displaySum(vector<int> nums, int sum) {

    cout << nums.at(0) << " + " << nums.at(1) << " = " << sum << endl;
    
}

int main() {

    const int MAX_SIZE = 2;
    const int MIN_SIZE = 1;
    const string first_request = "Please enter a number! ";
    const string second_request = "Please enter another number! ";
    vector<string> requests = {first_request, second_request};
    vector<int> nums;
    int sum;

    while(nums.size() < 2) {
        if (nums.size() < 1)
        {
            nums.push_back(requestANumber(first_request));
        }
        else if (nums.size() == 1)
        {
            nums.push_back(requestANumber(second_request));
        }
    }
    
    sum = accumulate(nums.begin(), nums.end(), 0);

    displaySum(nums, sum);

    return 0;
}