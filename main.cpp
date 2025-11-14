#include <iostream>
#include <iomanip>
#include "fractionType.h"

using namespace std; 

int main()
{
     fractionType num1;
     fractionType num2;
     fractionType num3;

     cout << "Enter the first fraction "
          << "in the form a / b:   ";
     cin >> num1;

     cout << "Enter the second fraction "
          << "in the form a / b:   ";
     cin >> num2;
     cout << endl;

     //Equality Check
     cout << num1 << " == " << num2 << " = " << (num1==num2) << endl;
     //Does Not Equal Check
     cout << num1 << " != " << num2 << " = " << (num1!=num2) << endl;
     //Less Than or Equal To Check
     cout << num1 << " <= " << num2 << " = " << (num1<=num2) << endl;
     //Less Than Check
     cout << num1 << " < " << num2 << " = " << (num1<num2) << endl;
     //Greater Than or Equal To Check
     cout << num1 << " >= " << num2 << " = " << (num1>=num2) << endl;
     //Greater Than Check
     cout << num1 << " > " << num2 << " = " << (num1>num2) << endl;
     //Addition Check
     num3 = num1 + num2;
     cout << num1 << " + " << num2
          << " = " << num3 << endl;
     //Multiplication Check
     num3 = num1 * num2;
     cout << num1 << " * " << num2
          << " = " << num3 << endl;
     //Subtraction Check
     num3 = num1 - num2;
     cout << num1 << " - " << num2
          << " = " << num3 << endl;
     //Division Check
     num3 = num1/num2;
     cout << "(" << num1 << ") / (" << num2
          << ") = " << num3 << endl;

     return 0;
}