/**
 * @file cpp_study_2.cpp
 * @author Jun (syo2357@gmail.com)
 * @brief About data type. Focus on NEW THINGS!!
 * @version 0.1
 * @date 2022-12-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>

int main(void)
{
    const float PI = 3.14;
    // PI = 4; //error: cannot assign to variable 'PI' with const-qualified type 'const float'

    // integer datatypes
    short dataType1;
    std::cout << sizeof(dataType1) << std::endl; // 2
    unsigned short dataType2;
    std::cout << sizeof(dataType2) << std::endl; // 2
    int dataType3;
    std::cout << sizeof(dataType3) << std::endl; // 4
    unsigned int dataType4;
    std::cout << sizeof(dataType4) << std::endl; // 4
    long dataType5;
    std::cout << sizeof(dataType5) << std::endl; // 8
    unsigned long dataType6;
    std::cout << sizeof(dataType6) << std::endl; // 8
    long long dataType7;
    std::cout << sizeof(dataType7) << std::endl; // 8
    unsigned long long dataType8;
    std::cout << sizeof(dataType8) << std::endl; // 8

    // actual number datatypes
    float dataType9;
    std::cout << sizeof(dataType9) << std::endl; // 4
    double dataType10;
    std::cout << sizeof(dataType10) << std::endl; // 8

    // character datatypes
    char dataType11;
    std::cout << sizeof(dataType11) << std::endl; // 1
    unsigned char dataType12;
    std::cout << sizeof(dataType12) << std::endl; // 1

    // boolean types
    // This is not a defined macro or something else. It really is a officially supported datatype.
    bool boolean1 = true;
    bool boolean2 = false;

    // New things -> about null pointer
    int *num_ptr = nullptr; // Way safer to use "nullptr" instead of using 0. (added C++11)

    // New things -> about type casting operator "()"
    int bla1 = 3;
    int bla2 = 7;
    double result1 = (double)bla1 / bla2; // C and C++
    double result1 = double(bla1) / bla2; // Only in C++
    return 0;
}