/**
 * @file cpp_study_4.cpp
 * @author Jun (syo2357@gmail.com)
 * @brief About ect operators. Ternary operator seems quite useful. 
 * @version 0.1
 * @date 2022-12-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main(void)
{
    int a, b, left, right, result;

    a = 3;
    b = 5;
    left = 123;
    right = -123;
    result = (a < b) ? left : right;
    // if conditional statement is 'true', left will be returned, if its false, right will be returned. 
    std::cout << "Result : [" << result << "]" << std::endl; // Result : [123]

    // sizeof() is also an operator!!
}