// /*
//  * @Author: WanHao
//  * @Date: 2021-11-10 13:26:58
//  * @LastEditors: Do not edit
//  * @LastEditTime: 2021-11-10 13:42:29
//  * @FilePath: \my_leetcodes_question_answers\102.二叉树的层序遍历.cpp
//  * @FileDescription: Lazy~~~
//  */
// /*
//  * @lc app=leetcode.cn id=102 lang=cpp
//  *
//  * [102] 二叉树的层序遍历
//  */

// // @lc code=start
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */

// #include <iostream>
// #include <vector>
// #include <string>
// #include <set>
// #include <map>
// #include <unordered_map>
// #include <unordered_set>
// #include <stack>
// #include <queue>
// using namespace std;

// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

// class Solution
// {
// public:
//     vector<vector<int>> levelOrder(TreeNode *root)
//     {
//         vector<vector<int>> ret;
//         if (root == nullptr)
//         {
//             return ret;
//         }

//         queue<TreeNode *> nodes;
//         nodes.push(root);
//         while (!nodes.empty())
//         {
//             int size = nodes.size();
//             ret.push_back(vector<int>());
//             while (size--)
//             {
//                 TreeNode *head = nodes.front();
//                 nodes.pop();
//                 ret.back().push_back(head->val);
//                 if (head->left != nullptr)
//                 {
//                     nodes.push(head->left);
//                 }
//                 if (head->right != nullptr)
//                 {
//                     nodes.push(head->right);
//                 }
//             }
//         }

//         return ret;
//     }
// };

// //是我小看这个题了

// // @lc code=end
