// /*
//  * @Author: WanHao
//  * @Date: 2021-12-03 16:29:06
//  * @LastEditors: Do not edit
//  * @LastEditTime: 2021-12-03 17:11:19
//  * @FilePath: \my_leetcodes_question_answers\230.kth-smallest-element-in-a-bst.cpp
//  * @FileDescription: Lazy~~~
//  */
// /*
//  * @lc app=leetcode id=230 lang=cpp
//  *
//  * [230] Kth Smallest Element in a BST
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

// // struct TreeNode
// // {
// //     int val;
// //     TreeNode *left;
// //     TreeNode *right;
// //     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// //     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// //     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x),
// //                                                        left(left), right(right) {}
// // };

// // #include <vector>
// // #include <iostream>
// // #include <string>
// // #include <stack>
// // using namespace std;
// class Solution
// {
// public:
//     int kthSmallest(TreeNode *root, int k)
//     {
//         int rank = 0;

//         stack<TreeNode*> nodes;
//         //nodes.push(root);
//         TreeNode* curNode = root;
        
//         while(curNode != NULL || !nodes.empty()){
            
//             while(curNode){
//                 nodes.push(curNode);
//                 curNode = curNode->left;
//             }
//             if(!nodes.empty()){
//                 curNode = nodes.top();
//                 nodes.pop();
//                 rank++;
//                 if(rank == k){
//                     return curNode->val;
//                 }
//                 curNode = curNode->right;
//             }
            
//         }
//         return 0;

//     }

// };
// // @lc code=end
