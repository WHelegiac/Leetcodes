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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
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
#include <cctype>
#include <utility>
#include <algorithm>
using namespace std;

// class Solution
// {

// public:
//     vector<int> preorderTraversal(TreeNode *root)
//     {
//         vector<int> ret;
//         recursion(root, ret);

//         return ret;
//     }

//     void recursion(TreeNode *root, vector<int> &ret)
//     {
//         if (root == NULL)
//         {
//             return;
//         }

//         ret.push_back(root->val);
//         recursion(root->left, ret);
//         recursion(root->right, ret);
//     }
// };

//递归写法，时间击败100%, 但是空间感人！！！

//下面试一下非递归写法

// class Solution
// {
// public:
//     vector<int> preorderTraversal(TreeNode *root)
//     {
//         vector<int> ret;

//         if (root == NULL)
//         {
//             return ret;
//         }

//         stack<TreeNode *> nodes;
//         TreeNode *temp = root;

//         while (!nodes.empty() || temp != NULL)
//         {
//             while (temp)
//             {
//                 nodes.push(temp);
//                 ret.push_back(temp->val);
//                 temp = temp->left;
//             }
//             TreeNode* top = nodes.top();
//             nodes.pop();
//             temp = top->right;

//         }
//         return ret;
//     }
// };

//这个方法牛逼多了!!!

//当然这种装逼且无用的方法也来玩玩吧!

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ret;
        if (root == NULL)
        {
            return ret;
        }

        TreeNode *cur = root;
        while (cur != NULL)
        {
            ret.push_back(cur->val);
            if (cur->left == NULL)
            {
                cur = cur->right;
            }
            else
            {
                TreeNode *rightest = findRightest(cur->left);
                if(rightest->right == NULL){
                    rightest->right = cur;
                    continue;
                }
                if(rightest->right == cur ){
                    rightest->right = NULL;
                    cur = cur->right;
                }
            }
        }
    }

    TreeNode *findRightest(TreeNode *node)
    {
        if (node == NULL)
        {
            return NULL;
        }
        TreeNode *ret = node;
        while (ret->right != NULL)
        {
            ret = ret->right;
        }
        return ret;
    }
};

// @lc code=end
