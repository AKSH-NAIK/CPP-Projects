#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    cout << "Enter weight in kg: ";
    cin >> weight;
    cout << "Enter height in centimeters: ";
    cin >> height;

    // Convert height from centimeters to meters
    height = height / 100;

    // Calculate BMI
    bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << endl;

    // Determine weight category based on BMI
    if (bmi < 0) {
        cout << "Invalid BMI value." << endl;
        return 1; // Exit with error code
    }
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "You are normal weight." << endl;
    } else {
        cout << "You are overweight." << endl;
    }

    return 0;
}
