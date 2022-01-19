/*
 * @Author: WanHao
 * @Date: 2021-11-08 15:15:45
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-08 17:47:14
 * @FilePath: \my_leetcodes_question_answers\590.n-叉树的后序遍历.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=590 lang=cpp
 *
 * [590] N 叉树的后序遍历
 */

// @lc code=start

// Definition for a Node.


#include <vector>
#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};




// 

class Solution{

public:
    vector<int> postorder(Node* root) {
        if (root == NULL){
            return {};
        }
        vector<int> ret;
        stack<Node*> stk;
        stk.push(root);
        while(!stk.empty()){
            Node* temp = stk.top();
            stk.pop();
           
            for(int i = 0; i < temp->children.size();i++){
                stk.push(temp->children[i]);
            }
             ret.push_back(temp->val);
        }

        reverse(ret.begin(),ret.end());
        return ret;
    }
};
// @lc code=end