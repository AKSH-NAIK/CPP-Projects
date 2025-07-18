# ⚖️ BMI Calculator (C++)

A simple Body Mass Index (BMI) calculator written in C++ that takes weight and height from the user and classifies them into a health category based on the BMI result.

---

## 🧰 Tech Stack

- **Language**: C++
- **IDE**: Visual Studio Code
- **Compiler**: g++ (MinGW / )

---

## 🚀 How to Run

1. **Clone the project** or copy the `.cpp` file into your working directory.
2. **Open Terminal in VS Code** (`` Ctrl + ` ``).
3. **Compile the code** using:

   ```bash
   g++ -o bmi_calculator bmi_calculator.cpp
4. **Run the program** using :
5. ./bmi_calculator

📥**Input Format**
Weight in kilograms

Height in centimeters

📤 **Sample Output**
Enter weight in kg: 70
Enter height in centimeters: 175
Your BMI is: 22.8571
You are normal weight.


📊 **BMI Categories**
BMI Range	Category
BMI < 18.5	Underweight
18.5 ≤ BMI < 24.9	Normal weight
BMI ≥ 24.9	Overweight

⚠️ The program also checks for invalid (negative) input values.

✅ Features
Accepts input in metric units (kg & cm).

Converts height to meters internally.

Outputs precise BMI and classification.

Simple and lightweight.
