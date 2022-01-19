/*
 * @Author: your name
 * @Date: 2021-11-05 09:26:24
 * @LastEditTime: 2021-12-05 12:58:32
 * @LastEditors: Do not edit
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \my_leetcodes_question_answers\144.二叉树的前序遍历.cpp
 */
/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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

#include <vector>
#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Solution
{

public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> nodes;
        vector<int> ret;
        while (root != NULL || !nodes.empty())
        {
            if (root != NULL)
            {
                ret.push_back(root->val);
                if (root->right)
                {
                    nodes.push(root->right);
                }
                root = root->left;
            }
            else
            {
                root = nodes.top();
                nodes.pop();
            }

            return ret;
        }
        return ret;
    }
};
// @lc code=end
