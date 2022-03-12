/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
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
using namespace std;

class Solution
{
public:
    int countSegments(string s)
    {
        int segmentCount = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if ((i == 0 || s[i - 1] == ' ') && s[i] != ' ')
            {
                segmentCount++;
            }
        }

        return segmentCount;
    }
};

//这波控制得稳呐！
//上来一个不是空格就算单词，然后判断i和i-1的位置

// int main(){
//     string s = "My name is WanHao,So let`s Go";
//     cout<<Solution().countSegments(s);
// }
// @lc code=end
