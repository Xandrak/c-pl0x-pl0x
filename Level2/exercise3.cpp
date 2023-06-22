#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Redo exercise 3 from Lesson 1 using functions and std namespace


double computeAverage(double sum, int num_elements) {
    double average = 0.0;

    if (num_elements > 0)
    {
        average = sum / num_elements;
    }

    return average;
}

int main() {
    vector<double> nums_list = {20.0, 56.0, 32.2, 89.45};
    int num_elements = nums_list.size();
    double sum = accumulate(nums_list.begin(), nums_list.end(), 0.0);
    double average = computeAverage(sum, num_elements);

    cout << "We'll compute the average of this list of doubles: " << endl;
    for (int i = 0; i < num_elements; i++) {
        cout << nums_list[i] << " ";

        if (i == num_elements - 1) {
            cout << endl;
        }
    }
    cout << "The average is: " << average << "!" << endl;
    
    return 0;
}