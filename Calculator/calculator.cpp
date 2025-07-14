#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
    float result;
    
    // First Input
    cout << "Enter first number: ";
    cin >> num1;
    
    //Ask for Operation
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    //Second Input
    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation based on operator
    switch(op) {
        case '+':
             result = num1+num2;
            cout << num1 << "+" <<num2 << "=" << result << endl;
            break;
        case '-':
              result = num1-num2;
            cout << num1 << "-" <<num2 << "="  << result << endl;
            break;
        case '*':
              result = num1*num2;
            cout << num1 << "*" <<num2 << "=" <<result << endl;
            break;
        case '/':
            if (num2 != 0){
             result = num1/num2;
                cout <<num1 << "/" <<num2 << "=" <<result << endl;
                }
            else
                cout << "Error: Cannot divide by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
