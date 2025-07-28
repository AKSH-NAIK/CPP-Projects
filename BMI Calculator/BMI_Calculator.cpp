#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    // Get weight input
    cout << "Enter weight in kg: ";
    while (!(cin >> weight)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Enter weight in kg: ";
    }

    // Get height input
    cout << "Enter height in centimeters: ";
    while (!(cin >> height)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Enter height in centimeters: ";
    }

    // Convert height from centimeters to meters
    height = height / 100;

      //check for zero or negative weight
    if(weight<=0){
        cout<< "Invalid weight value."<<endl;
        return 1;
    }

    // Check for zero or negative height
    if (height <= 0) {
        cout << "Invalid height value." << endl;
        return 1;
    }

  
    // Calculate BMI
    bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << endl;

    // Determine weight category based on BMI
    if (bmi < 0) {
        cout << "Invalid BMI value." << endl;
        return 1;
    }
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi < 24.9) {
        cout << "You are normal weight." << endl;
    } else {
        cout << "You are overweight." << endl;
    }

    return 0;
}
