/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
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
#include <cmath>
using namespace std;
class Solution
{
public:
    int countPrimes(int n)
    {
        vector<bool> prime(n, true);
        prime[0] = false, prime[1] = false;
        for (int i = 0; i < sqrt(n); ++i)
        {
            if (prime[i])
            {
                for (int j = i * i; j < n; j += i)
                {
                    prime[j] = false;
                }
            }
        }
        return count(prime.begin(), prime.end(), true);
    }
};

// int main()
// {
//     cout << Solution().countPrimes(499979);
// }
// @lc code=end
