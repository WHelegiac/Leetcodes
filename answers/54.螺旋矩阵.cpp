/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
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
#include <deque>
#include <cmath>
#include <queue>
#include <cctype>
#include <utility>
#include <algorithm>
using namespace std;

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;

//         vector<pair<int,int>> directions{make_pair(0,1),make_pair(1,0),make_pair(0,-1),make_pair(-1,0)};

//         return ans;
//     }
// };

//以上做法太烧内存空间

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        if (matrix.size() == 0)
        {
            return {};
        }
        if (matrix[0].size() == 0)
        {
            return {};
        }

        vector<int> ans;

        int rows = matrix.size();
        int cols = matrix[0].size();

        int left = 0, right = cols - 1, top = 0, bottom = rows - 1;
        int totalNum = rows * cols;
        while (totalNum > 0)
        {
            for (int i = left; i <= right && totalNum >= 1; i++)
            {
                ans.push_back(matrix[top][i]);
                totalNum--;
            }
            top++;
            for (int i = top; i <= bottom && totalNum >= 1; i++)
            {
                ans.push_back(matrix[i][right]);
                totalNum--;
            }
            right--;
            for (int i = right; i >= left && totalNum >= 1; i--)
            {
                ans.push_back(matrix[bottom][i]);
                totalNum--;
            }
            bottom--;
            for (int i = bottom; i >= top && totalNum >= 1; i--)
            {
                ans.push_back(matrix[i][left]);
                totalNum--;
            }
            left++;
            // test
            //cout << "totalNum = " << totalNum << endl;
        }
        return ans;
    }
};

int main()
{

    vector<vector<int>> test{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    for (int num : Solution().spiralOrder(test))
    {
        cout << num << " ";
    }
}

//
// @lc code=end
