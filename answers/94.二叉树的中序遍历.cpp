/*
 * @Author: your name
 * @Date: 2021-11-04 11:15:20
 * @LastEditTime: 2021-12-02 19:06:29
 * @LastEditors: Do not edit
 * @Description: In User Settings Edit
 * @FilePath: \my_leetcodes_question_answers\94.二叉树的中序遍历.cpp
 */
/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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

struct TreeNode
{
    int val;
    TreeNode *left;

    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include <vector>
#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Solution
{

public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        TreeNode *tempNode = root;
        stack<TreeNode *> stk;
        while (tempNode != NULL)
        {
            stk.push(tempNode);
            tempNode = tempNode->right;
        }

        tempNode = stk.top();
        stk.pop();
        ans.push_back(tempNode->val);
    }
};
// @lc code=end
