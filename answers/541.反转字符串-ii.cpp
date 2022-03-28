/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
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
using namespace std;

class Solution
{
public:
    string reverseStr(string s, int k)
    {
        int len = s.size();
        if (len < 2 * k)
        {
            return s;
        }

        for (int i = 2*k; i <= len; i += 2 * k)
        {
            int p = i - 2*k, q = i -k -1;
            
            while (p < q)
            {
                swap(s[p], s[q]);
                p++;
                q--;
            }
            if (len - (2 * k + i) < k)
            {
                p = i + 2 * k;
                q = len - 1;
                while (p < q)
                {
                    swap(s[p], s[q]);
                    p++;
                    q--;
                }
            }
            if(len - (2*k+i) >=k && len -(2*k +i) < 2k){

            }

        }
    }
};

//TODO



//我快被下标给玩晕了!
// @lc code=end
