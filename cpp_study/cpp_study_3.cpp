/**
 * @file cpp_study_3.cpp
 * @author Jun (syo2357@gmail.com)
 * @brief Bitwise operator. It will be useful.... maybe?
 * @version 0.1
 * @date 2022-12-08
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

int main(void)
{
    unsigned int a, b, result;

    // & [AND]operator : if matching bits are both 1, returns 1.
    a = 5; // 00000011
    b = 9; // 00000101
    result = a & b;
    std::cout << "Result : [" << result << "]" << std::endl; // Result : [1]

    // | [OR]operator : if one or both matching bits are 1, returns 1.
    a = 4; // 00000010
    b = 8; // 00000100
    result = a | b;
    std::cout << "Result : [" << result << "]" << std::endl; // Result : [12]

    // ~ [NOT]operator : inverse bits.
    a = 4294967295; // 11111111 -> 00000000
    result = ~a;
    std::cout << "Result : [" << result << "]" << std::endl; // Result : [0]

    // ^ [XOR]operator : if matching bits are different, returns 1. 
    a = 2; // 00000010
    b = 4; // 00000100
    result = a ^ b;
    std::cout << "Result : [" << result << "]" << std::endl; // Result : [6]

    // <<, >>  [Shift]operator : push bits to >> or << direction.
    a = 4; // 00000100 -> 00001000
    result = a << 1;
    std::cout << "Result : [" << result << "]" << std::endl; // Result : [8]

    a = 4; // 00000100 -> 00000010
    result = a >> 1;
    std::cout << "Result : [" << result << "]" << std::endl; // Result : [2]

    return 0;
}