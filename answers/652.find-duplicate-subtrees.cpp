/*
 * @Author: WanHao
 * @Date: 2021-12-05 12:02:59
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-12-05 13:09:54
 * @FilePath: \my_leetcodes_question_answers\652.find-duplicate-subtrees.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode id=652 lang=cpp
 *
 * [652] Find Duplicate Subtrees
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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x),left(left), right(right) {}
};

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
using namespace std;

class Solution
{
public:
    vector<TreeNode *> findDuplicateSubtrees(TreeNode *root)
    {
        unordered_map<string, int> m;
        vector<TreeNode *> res;
        DFS(root, m, res);
        return res;
    }

    string DFS(TreeNode *root, unordered_map<string, int> &m, vector<TreeNode *> &res)
    {
        if (!root)
            return "";
        string s = to_string(root->val) + "," + DFS(root->left, m, res) + "," + DFS(root->right, m, res);
        if (m[s]++ == 1)
            res.push_back(root);
        return s;
    }//todo
};
// @lc code=end
