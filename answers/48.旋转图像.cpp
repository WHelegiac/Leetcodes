// /*
//  * @lc app=leetcode.cn id=48 lang=cpp
//  *
//  * [48] 旋转图像
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
//     void rotate(vector<vector<int>> &matrix)
//     {
//         int rows = matrix.size();
//         if (rows == 0)
//         {
//             return;
//         }
//         int cols = matrix[0].size();
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < i; j++)
//             {
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }

//         for(int i = 0; i< rows;i++){
//             int l= 0,r = cols-1;
//             while(l < r){
//                 swap(matrix[i][l],matrix[i][r]);
//                 l++;r--;
//             }
            
//         }
//     }
// };

// int main(){
//     vector<vector<int>> matrix{{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
//     Solution().rotate(matrix);

//     for(vector<int> rol : matrix){
//         for(int num : rol){
//             cout<<num<<" ";
//         }
//         cout<<endl;
//     }
// }
// // @lc code=end
