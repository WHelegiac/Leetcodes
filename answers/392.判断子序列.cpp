/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
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
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0;
        while (i < s.size() && j < t.size())
        {
            cout<<"第"<<j<<"波循环";
            if (s[i] == t[j])
            {
                cout << s[i] << "==" << t[j] << "   and  " << i << "  " << j;
                i++;
            }
            j++;
            cout<<endl;
        }
        cout<<"i ="<<i<<endl;
        return i == s.size();
    }
};

int main()
{
    Solution().isSubsequence("abc", "ahbgdc");
}
// @lc code=end
