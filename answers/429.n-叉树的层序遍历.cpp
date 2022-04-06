// /*
//  * @Author: WanHao
//  * @Date: 2021-11-08 15:39:49
//  * @LastEditors: Do not edit
//  * @LastEditTime: 2021-11-08 17:50:06
//  * @FilePath: \my_leetcodes_question_answers\429.n-叉树的层序遍历.cpp
//  * @FileDescription: Lazy~~~
//  */
// /*
//  * @lc app=leetcode.cn id=429 lang=cpp
//  *
//  * [429] N 叉树的层序遍历
//  */

// // @lc code=start
// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     vector<Node*> children;

//     Node() {}

//     Node(int _val) {
//         val = _val;
//     }

//     Node(int _val, vector<Node*> _children) {
//         val = _val;
//         children = _children;
//     }
// };
// */

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


// class Node
// {
// public:
//     int val;
//     vector<Node *> children;

//     Node() {}

//     Node(int _val)
//     {
//         val = _val;
//     }

//     Node(int _val, vector<Node *> _children)
//     {
//         val = _val;
//         children = _children;
//     }
// };

// class Solution
// { 
// public:
//     vector<vector<int>> levelOrder(Node *root)
//     {
//         vector<vector<int>> ret;
//         if(root == NULL){
//             return ret;
//         }

//         queue<Node*> nodes;
//         nodes.push(root);
//         while(!nodes.empty()){
//             int size = nodes.size();
//             vector<int> tier;
//             Node* temp = NULL;
//             for(int i = 0; i< size; i++){
//                 temp = nodes.front();
//                 tier.push_back(temp->val);
//                 nodes.pop();
//                 for(Node* child : temp->children){
//                     if(child != NULL){
//                         nodes.push(child);
//                     }
//                 }
//             }
//             ret.push_back(tier);
//         } 

//         return ret;

//     }
// };
// // @lc code=end
