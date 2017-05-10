//
//  main.cpp
//  simple_calculator_win
//
//  Created by Matthew Davis on 10/3/16.
//  Copyright © 2016 Matthew Davis. All rights reserved.
//

// #include "stdafx.h"
#include <iostream>
#include <cmath>
#include <math.h>
#include <ccomplex>
#include <complex>
#include <stdio.h>
#include <stdlib.h>
#include <ostream>
#include <limits>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    
    // double num1, num2;
    // int64_t num1, num2;
    long long num1, num2;
    // __int64 num1, num2;
    // typedef long num1, num2;
    
    cout << "Please enter a number:" << endl;
    cin >> num1;
    cout << "Please enter another number:" << endl;
    cin >> num2;
    
    int answer;
    cout << "Please choose an operator:" << endl << "1 = +, 2 = -, 3 = *, 4 = /" << endl << "5 = square" << endl << "6 = square root" << endl << "7 = absolute value" << endl << "8 = sine" << endl << "9 = cosine" << endl << "10 = tangent" << endl << "11 = sinh" << endl << "12 = cosh" << endl << "13 = tanh" << endl << "14 = atan" << endl << "15 = asin" << "16 = acos" << endl << "17 = log" << endl << "18 = exp" << endl << "19 = cubic root" << endl << "20 = floor" << endl << "21 = hypotenuse" << endl << "22 = log10" << endl << "23 = fmod" << endl;
    cin >> answer;
    
    switch (answer) {
        case 1:
            cout << "Your answer is: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Your answer is: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Your answer is: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "Your answer is: " << num1 / num2 << endl;
            break;
        case 5:
            cout << num1 << " squared is " << num1 * num1 << endl;
        case 6:
            cout << "The square root of " << num1 << " is " << sqrt(num1) << endl;
            break;
        case 7:
            cout << "The absolute value of " << num1 << " is " << abs(num1) << endl;
            break;
        case 8:
            cout << "The sine of " << num1 << " is " << sin(num1) << endl;
            break;
        case 9:
            cout << "The cosine of " << num1 << " is " << cos(num1) << endl;
            break;
        case 10:
            cout << "The tangent of " << num1 << " is " << tan(num1) << endl;
            break;
        case 11:
            cout << "The sinh of " << num1 << " is " << sinh(num1) << endl;
            break;
        case 12:
            cout << "The cosh of " << num1 << " is " << cosh(num1) << endl;
            break;
        case 13:
            cout << "The tanh of " << num1 << " is " << tanh(num1) << endl;
            break;
        case 14:
            cout << "The atan of " << num1 << " is " << atan(num1) << endl;
            break;
        case 15:
            cout << "The asin of " << num1 << " is " << asin(num1) << endl;
            break;
        case 16:
            cout << "The acos of " << num1 << " is " << acos(num1) << endl;
            break;
        case 17:
            cout << "The log of " << num1 << " is " << log(num1) << endl;
            break;
        case 18:
            cout << "The exp of " << num1 << " is " << exp(num1) << endl;
            break;
        case 19:
            cout << "The cubic root of " << num1 << " is " << cbrt(num1) << endl;
            break;
        case 20:
            cout << "The floor of " << num1 << " is " << floor(num1) << endl;
            break;
        case 21:
            cout << "The hypotenuse is " << hypot(num1, num2) << endl;
            break;
        case 22:
            cout << "The log10 of " << num1 << " is " << log10(num1) << endl;
            break;
        case 23:
            cout << "The fmod is " << fmod(num1, num2) << endl;
            break;
        default:
            cout << "Your choice is invalid." << endl;
    }
    
    // system("pause");
    return 0;
}

