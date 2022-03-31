// /*
//  * @lc app=leetcode.cn id=141 lang=cpp
//  *
//  * [141] 环形链表
//  */

// // @lc code=start
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
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


// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* faster = head;
//         ListNode* slower = head;
//         while(true){
//             if(slower == NULL || faster == NULL || faster->next == NULL){
//                 return false;
//             }
//             slower = slower->next;
//             faster = faster->next->next;
//             if(slower == faster){
//                 return true;
//             }
//         }
//         return false;
//     }
// };

//掌握技巧 ！ 毫无压力~
// // @lc code=end

