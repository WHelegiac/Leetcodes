/*
 * @Author: WanHao
 * @Date: 2021-11-09 21:44:55
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-09 23:37:59
 * @FilePath: \my_leetcodes_question_answers\111.二叉树的最小深度.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


#include <vector>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        
        int leftDepth = minDepth(root->left);
        int rightDepth = minDepth(root->right);

        return (min(leftDepth,rightDepth) ? min(leftDepth,rightDepth) : max(rightDepth,leftDepth));


    }
};
// @lc code=end

