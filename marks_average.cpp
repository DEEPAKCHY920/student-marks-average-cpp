#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    float average = 0;

    cout << "Enter marks of 5 subjects (out of 100):\n";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    average = sum / 5.0;

    cout << "\nTotal Marks = " << sum << endl;
    cout << "Average Marks = " << average << endl;

    if (average >= 75) {
        cout << "Grade: Distinction";
    } 
    else if (average >= 60) {
        cout << "Grade: First Class";
    } 
    else if (average >= 40) {
        cout << "Grade: Pass";
    } 
    else {
        cout << "Grade: Fail";
    }

    return 0;
}
