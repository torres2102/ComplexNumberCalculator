//Author : Ziad Mohammed   
#include<iostream>
#include<cmath>
using namespace std;



void output(double real, double imag) {
    cout << "Current value is " << real << " + " << imag << "i" << endl;
}
void addition(double R1, double R2, double I1, double I2) {

    R1 += R2;
    I1 += I2;
    output(R1, I1);
}

void subtraction(double R1, double R2, double I1, double I2) {

    R1 -= R2;
    I1 -= I2;
    output(R1, I1);
}
void multiplication(double R1, double R2, double I1, double I2) {
    double real, imag;
    real = (R1 * R2) - (I1 * I2);
    imag = R1 * I2 + R2 * I1;
    output(real, imag);
}
void division(double R1, double R2, double I1, double I2) {
    double real, imag, common_denominator;
    common_denominator = pow(R2,2) + pow(I2, 2);
    real = (R1 * R2) + (I1 * I2);
    imag = (I1 * R2) - (R1 * I2);
    output((real/common_denominator), (imag/common_denominator));

}
int main() {

	bool is_on{ 1 };
    int choice;
    double R1, R2, I1, I2;




	while (is_on) {
        cout << "\nEnter Choice\n\n";
        cout << "1.Read complex number\n";
        cout << "2.Display complex number\n";
        cout << "3.Addition of complex number\n";
        cout << "4.Subtraction of complex number\n";
        cout << "5.Multiplication of complex number\n";
        cout << "6.Division of complex number\n";
        cout << "7.To exit\n";
        cin >> choice;
        cout << "\n";

        switch (choice) {

        case 1:
            cout << "Enter the first real number : "; cin >> R1;
            cout << "Enter the first imaginary number: "; cin >> I1;
            cout << "Enter the second real number : "; cin >> R2;
            cout << "Enter the second imaginary number : "; cin >> I2;
            break;
        case 2:
            cout << '(' << R1 << ((I1 > 0) ? "+" : "") << I1 << "i)" << ",\t" << '(' << R2 << ((I2 > 0) ? "+" : "") << I2 << "i)\n";
            break;

        case 3:
            cout << "The addition of the complex numbers is : ";
            addition(R1, R2, I1, I2);
            break;
        case 4:
            cout << "The subtraction of the complex numbers is : "  ;
            subtraction(R1, R2, I1, I2);
            break;
        case 5:
            cout << "The multiplication of the complex numbers is : ";
            multiplication(R1, R2, I1, I2);
            break;
        case 6:
            cout << "The division of the complex numbers is : ";
            division(R1, R2, I1, I2);
            break;
        case 7:
            is_on = 0;
            break;
        default:
            cout << "Enter a valid option!!";
            break;
        }




	}





	return 0;
}