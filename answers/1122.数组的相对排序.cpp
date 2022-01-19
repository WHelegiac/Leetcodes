/*
 * @Author: WanHao
 * @Date: 2021-11-11 11:00:43
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-25 09:48:52
 * @FilePath: \my_VScodesd:\my_leetcodes_question_answers\1122.数组的相对排序.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=1122 lang=cpp
 *
 * [1122] 数组的相对排序
 */

// @lc code=start

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        int hash[1001] = {0};
        for(int i = 0; i <arr1.size();i++){
            hash[arr1[i]]++;
        }

        for(int i = 0,j =0; i < arr2.size();i++){
            while(hash[arr2[i]]--){
                arr1[j++] = arr2[j];
            }
        }

        for(int i = 0; i < 1001;i++){
            while(hash[i]--){
                arr1[j++] = i;
            }
        }
        
        return arr1;

    }
};
// @lc code=end

