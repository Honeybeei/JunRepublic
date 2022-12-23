/**
 * @file cpp_study_6.cpp
 * @author Jun (syo2357@gmail.com)
 * @brief About conditional statements especially switch
 * @version 0.1
 * @date 2022-12-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

int main(void)
{
    int age;

    std::cout << "How old are you? [Type your age]";
    std::cin >> age;

    switch (age)
    {
    case 10:
        std::cout << "blabla" << std::endl;
        break;
    case 20:
        std::cout << "WEEEE" << std::endl;
        break;
    case 30:
        std::cout << "HAHAA" << std::endl;
        break;
    default:
        std::cout << "only 10, 20 30 will work" << std::endl;
        break;
    }
}