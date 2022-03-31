/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

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

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         ListNode* dummyHead = new ListNode(0,head);
//         ListNode* frontNode = dummyHead;
//         ListNode* backNode = frontNode->next;

//         while(backNode != NULL && backNode->next != NULL){
//             ListNode* tempNode = backNode->next;
//             frontNode->next = tempNode;
//             tempNode->next = backNode;
//             backNode->next = tempNode->next;
//         }
//         return dummyHead->next;
//     }
// };

//上面那种方法超时了

// class Solution
// {
// public:
//     ListNode *swapPairs(ListNode *head)
//     {
//         ListNode *dummyHead = new ListNode(0, head);
//         ListNode *tempNode = dummyHead;
//         while (tempNode->next != NULL && tempNode->next->next != NULL)
//         {
//             ListNode* frontNode = tempNode->next;
//             ListNode* backNode = frontNode->next;
//             tempNode->next = backNode;
//             frontNode->next = backNode->next;
//             backNode->next = frontNode;
//         }
//         return dummyHead->next;
//     }
// };
// @lc code=end
