// Copyright (c) 2025 Ivan Bondaruk
// All rights reserved.
//
// This file is part of SaylorCpp source code .
//
// You can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// You should have received a copy of the GNU General Public License
// along with MyAwesomeProject. If not, see <https://www.gnu.org/licenses/>.
//

#include "ex2.h"
#include <iostream>

using namespace std;

Ex2::Ex2()
{
    firstNum = 0;
    secNum = 0;
}

double Ex2::InputFirstNum() // Ask user to enter first number
{
    cout << "Enter first num:" << endl;
    cin >> firstNum;

    return firstNum;
}

double Ex2::InputSecondNum()
{
    double num;

    cout << "Enter second num:" << endl;
    cin >> num;

    secNum = num;

    return num;
}

double Ex2::Calculate()
{
    return firstNum + secNum;
}

double Ex2::Calculate(double firstNum, double secNum)
{
    resultNum = firstNum + secNum;
    return resultNum;
}

double Ex2::AllIn()
{
    InputFirstNum();
    InputSecondNum();

    cout << Calculate();

    return resultNum;
}

