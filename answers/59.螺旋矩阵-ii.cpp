// /*
//  * @lc app=leetcode.cn id=59 lang=cpp
//  *
//  * [59] 螺旋矩阵 II
//  */

// // @lc code=start

// #include <iostream>
// #include <vector>
// #include <string>
// #include <set>
// #include <map>
// #include <unordered_map>
// #include <unordered_set>
// #include <stack>
// #include <deque>
// #include <cmath>
// #include <queue>
// #include <cctype>
// #include <utility>
// #include <algorithm>
// using namespace std;

// class Solution
// {
// public:
//     vector<vector<int>> generateMatrix(int n)
//     {
//         vector<vector<int>> ans(n, vector<int>(n, 0));
//         int maxValue = n * n;
//         int curValue = 1;
//         int row = 0, col = 0;
//         vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
//         int directionIndex = 0;

//         // test
//         int counter = 0;
//         while (curValue <= maxValue)
//         {
//             // test
//             //cout << "第" << row + 1 << "行" << col + 1 << "列值为:" << curValue << endl;
//             ans[row][col] = curValue;
//             curValue++;
//             int nextRow = row + directions[directionIndex][0];
//             int nextCol = col + directions[directionIndex][1];
//             if (nextRow < 0 || nextRow >= n || nextCol < 0 || nextCol >= n || ans[nextRow][nextCol] != 0)
//             {

//                 directionIndex = (directionIndex + 1) % 4;
//                 // test
//                // cout << "向" << directionIndex << "转" << endl;
//             }
//             row += directions[directionIndex][0];
//             col += directions[directionIndex][1];
//         }
//         return ans;
//     }
// };

// int main()
// {

//     vector<vector<int>> ans = Solution().generateMatrix(10);

//     for(auto row : ans){
//         for(auto num : row){
//             cout<<num<<"\t";
//         }
//         cout<<endl;
//     }
// }
// // @lc code=end
