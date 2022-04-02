/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 平方数之和
 */

// @lc code=start

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <cctype>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;

// class Solution {
// public:
//     bool judgeSquareSum(int c) {
//         unordered_set<int> hash;
//         for(int i = 0; i<= sqrt(c); i++){
//             hash.insert(i*i);
//         }
//         for(int i = 0; i<= sqrt(c); i++){
//             if(hash.find(c -i*i) != hash.end()){
//                 return true;
//             }
//         }

//         return false;
//     }
// };

//虽然通过了,但是只打败百分之5的人好。。。

//来一波双指针法

class Solution
{
public:
    bool judgeSquareSum(int c)
    s{
        long i = 0, j = (int)sqrt(c);
        while (i <= j)
        {
            long sum = i * i + j * j;
            if (sum == c)
            {
                return true;
            }
            else if (sum < c)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }
};

//一定要提防整形溢出

// @lc code=end
