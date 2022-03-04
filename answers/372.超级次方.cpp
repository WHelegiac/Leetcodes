/*
 * @lc app=leetcode.cn id=372 lang=cpp
 *
 * [372] 超级次方
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
using namespace std;

class Solution
{
public:
    int superPow(int a, vector<int> &b)
    {
        if (b.size() == 0)
        {
            return 1;
        }

        int lastNum = b.back();
        b.pop_back();
        int partOne = myPow(a, lastNum);
        int partTwo = myPow(superPow(a, b), 10);

        return partOne * partTwo;
    }

private:
    int myPow(int a, int b)
    {
        
    }
};
// @lc code=end
