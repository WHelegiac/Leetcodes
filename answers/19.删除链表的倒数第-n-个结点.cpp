// /*
//  * @lc app=leetcode.cn id=19 lang=cpp
//  *
//  * [19] 删除链表的倒数第 N 个结点
//  */

// // @lc code=start
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */

// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

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

// class Solution
// {
// public:
//     ListNode *removeNthFromEnd(ListNode *head, int n)
//     {
//         ListNode *dummyHead = new ListNode(0, head);
//         ListNode *tailNode = head;
//         while (n--)
//         {
//             if (tailNode == NULL)
//             {
//                 break;
//             }
//             tailNode = tailNode->next;
//         }

//         ListNode *lastNode = dummyHead;
//         ListNode *delNode = head;
//         while (tailNode->next != NULL)
//         {
//             lastNode = lastNode->next;
//             tailNode = tailNode->next;
//             delNode = delNode->next;
//         }
//         lastNode->next = delNode->next;
//         delete delNode;
//         return dummyHead->next;
//     }
// };
// // @lc code=end
