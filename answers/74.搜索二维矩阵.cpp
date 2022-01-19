/*
 * @Author: WanHao
 * @Date: 2021-11-09 16:30:03
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-09 16:50:31
 * @FilePath: \my_leetcodes_question_answers\74.搜索二维矩阵.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */


// @lc code=start
#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {


        int rows = matrix.size(), columns = matrix[0].size();
        int l = 0 , r = rows*columns -1;
        while(l <= r){
            int mid = l + (r -l ) /2;
            if(matrix[mid/columns][mid%columns] == target){
                return true;
            }else if( matrix[mid/columns][mid% columns] < target){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }

        return false;
    }
};

// @lc code=end