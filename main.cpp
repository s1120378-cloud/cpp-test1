/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

double calculateBMI(double weight_kg, double height_cm) {
    if (height_cm <= 0) return 0.0;
    
    double height_m = height_cm / 100.0;  // Convert cm to meters
    double bmi = weight_kg / (height_m * height_m);  // BMI calculation
    return bmi;
}

int main() {
    double weight1, weight2, height1, height2;

    weight1 = 80;
    weight2 = 70;
    height1 = 168;
    height2 = 188;

    std::cout << "Your BMI is: " << calculateBMI(weight1, height1) << std::endl;
    std::cout << "Another BMI is: " << calculateBMI(weight2, height2) << std::endl;

    return 0;
}
