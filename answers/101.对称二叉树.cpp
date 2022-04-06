// /*
//  * @lc app=leetcode.cn id=101 lang=cpp
//  *
//  * [101] 对称二叉树
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
// #include <cctype>
// #include <utility>
// #include <algorithm>
// using namespace std;


// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x),left(left), right(right) {}
// };


// //这个题我一上来的第一欲望是把它来一波程序遍历，看每一层的节点是否堆成(null也算在里面)
// //然而真正的秒方法还是秒哇


// class Solution {
// public:
//     bool check(TreeNode *p, TreeNode *q) {
//         if(p == NULL && q == NULL){
//             return true;
//         }

//         if(p == NULL || q == NULL){
//             return false;
//         }

//         return p->val == q->val && check(p->left,q->right) && check(p->right,q->left);
//     }

//     bool isSymmetric(TreeNode* root) {
//         return check(root, root);
//     }
// };

// class Solution {
// public:
//     bool check(TreeNode *p, TreeNode *q) {
//         if (!p && !q) return true;
//         if (!p || !q) return false;
//         return p->val == q->val && check(p->left, q->right) && check(p->right, q->left);
//     }

//     bool isSymmetric(TreeNode* root) {
//         return check(root, root);
//     }
// };

// //这方法真叫一个秀哇！你说·我咋想不出来捏？？？
// //人与人之间的差距呀！


// // @lc code=end

