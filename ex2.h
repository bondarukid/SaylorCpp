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

#ifndef EX2_H
#define EX2_H

class Ex2
{
private:
    double firstNum;
    double secNum;
    double resultNum;
public:
    Ex2();
    double InputFirstNum();
    double InputSecondNum();
    double Calculate();
    double Calculate(double firstNum, double secNum);
    double AllIn();
};

#endif // EX2_H
