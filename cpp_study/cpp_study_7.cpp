/**
 * @file cpp_study_7.cpp
 * @author Jun (syo2357@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#define NUM_CNT 10

int main(void)
{
    int num_arr1[NUM_CNT] = {1, 2, 3, 7};
    int num_arr2[] = {4, 3, 2, 1};
    
    for (size_t i = 0; i < NUM_CNT; i++)
    {
        std::cout << num_arr1[i] << std::endl;
    }
        std::cout << sizeof(num_arr1) << std::endl;
        std::cout << sizeof(num_arr2) << std::endl;
    
    
    
}