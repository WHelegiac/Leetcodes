/*
 * @Author: WanHao
 * @Date: 2021-11-17 17:52:58
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-17 18:32:24
 * @FilePath: \undefinedd:\my_leetcodes_question_answers\46.全排列.cpp
 * @FileDescription: Lazy~~~
 */
#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    void DFS(vector<vector<int>>&res ,vector<int>& nums,int pos){
        if(pos == nums.size() -1){
            res.push_back(nums);
            return;
        }
        for(int i = pos; i <nums.size();i++){
            swap(nums[pos],nums[i]);
            DFS(res,nums,pos+1);
            swap(nums[pos],nums[i]);
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;

        
    }
};

