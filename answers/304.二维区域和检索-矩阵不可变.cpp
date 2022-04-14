// /*
//  * @lc app=leetcode.cn id=304 lang=cpp
//  *
//  * [304] 二维区域和检索 - 矩阵不可变
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

// class NumMatrix
// {
// public:
//     vector<vector<int>> prefixMatrix;

//     NumMatrix(vector<vector<int>> &matrix)
//     {
//         int rows = matrix.size();
//         if (rows > 0)
//         {
//             int cols = matrix[0].size();
//             prefixMatrix.resize(rows, vector<int>(cols + 1));
//             for (int i = 0; i < rows; i++)
//             {
//                 for (int j = 0; j < cols; j++)
//                 {
//                     prefixMatrix[i][j+1] = prefixMatrix[i][j] + matrix[i][j]; 
//                 }
//             }
//         }
//     }

//     int sumRegion(int row1, int col1, int row2, int col2)
//     {
//         int res = 0;
//         for(int i = row1; i<row2 ;i++){
//             res += prefixMatrix[i][col2 + 1] -prefixMatrix[i][col1];
//         }

//         return res;
//     }
// };


// class NumMatrix {
// public:
//     vector<vector<int>> sums;

//     NumMatrix(vector<vector<int>>& matrix) {
//         int m = matrix.size();
//         if (m > 0) {
//             int n = matrix[0].size();
//             sums.resize(m + 1, vector<int>(n + 1));
//             for (int i = 0; i < m; i++) {
//                 for (int j = 0; j < n; j++) {
//                     sums[i + 1][j + 1] = sums[i][j + 1] + sums[i + 1][j] - sums[i][j] + matrix[i][j];
//                 }
//             }
//         }
//     }

//     int sumRegion(int row1, int col1, int row2, int col2) {
//         return sums[row2 + 1][col2 + 1] - sums[row1][col2 + 1] - sums[row2 + 1][col1] + sums[row1][col1];
//     }
// };

// //不得不佩服标答的精妙之处,构造一行一列空的0出来方便处理,然而这个地方还可以借助if else 来优化,节省一定量的空间。

// /**
//  * Your NumMatrix object will be instantiated and called as such:
//  * NumMatrix* obj = new NumMatrix(matrix);
//  * int param_1 = obj->sumRegion(row1,col1,row2,col2);
//  */
// // @lc code=end
