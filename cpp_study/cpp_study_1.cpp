/**
 * @file cpp_study_1.cpp
 * @author Jun (syo2357@gmail.com)
 * @brief Intro to C++
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
    std::string name;

    // std::cout and cin
    std::cout << "Hello world" << std::endl;
    std::cout << "Whats your name? : ";
    std::cin >> name;
    std::cout << "Nice to meet you " << name << std::endl;
    return 0;
}