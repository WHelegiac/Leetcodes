/*
 * @Author: your name
 * @Date: 2021-11-01 08:54:53
 * @LastEditTime: 2021-11-02 10:02:55
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \my_VScodesd:\my_leetcodes_question_answers\8.字符串转换整数-atoi.cpp
 */
#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int myAtoi(string str)
    {
        long result = 0;
        int indicator = 1;
        for (int i = 0; i < str.size();)
        {
            i = str.find_first_not_of(' ');
            if (str[i] == '-' || str[i] == '+')
                indicator = (str[i++] == '-') ? -1 : 1;
            while ('0' <= str[i] && str[i] <= '9')
            {
                result = result * 10 + (str[i++] - '0');
                if (result * indicator >= INT_MAX)
                    return INT_MAX;
                if (result * indicator <= INT_MIN)
                    return INT_MIN;
            }
            return result * indicator;
        }
        return result * indicator;
    }
};
//TODO