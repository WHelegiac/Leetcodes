// /*
//  * @lc app=leetcode.cn id=203 lang=cpp
//  *
//  * [203] 移除链表元素
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
// }

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

// // class Solution
// // {
// // public:
// //     ListNode *removeElements(ListNode *head, int val)
// //     {

// //         ListNode *dummyHead = new ListNode(0,head);
// //         ListNode *p = dummyHead;
// //         while (p->next != NULL)
// //         {
// //             if (p->next->val == val)
// //             {
// //                 ListNode *temp = p->next;
// //                 p->next = temp->next;
// //                 delete temp;
// //                 continue;
// //             }
// //             p = p->next;
// //         }
// //         delete dummyHead;
// //         return dummyHead->next;
// //     }
// // };


// // class Solution
// // {
// // public:
// //     ListNode *removeElements(ListNode *head, int val)
// //     {
// //         struct ListNode *dummyHead = new ListNode(0, head);
// //         struct ListNode *temp = dummyHead;
// //         while (temp->next != NULL)
// //         {
// //             if (temp->next->val == val)
// //             {
// //                 ListNode *p = temp->next;
// //                 temp->next = p->next;
// //                 delete p;
// //                 continue;
// //             }
// //             temp = temp->next;
// //         }
// //         return dummyHead->next;
// //     }
// // };


// //其实还有更骚的方法:
// //递归!


// class Solution
// {
// public:
//     ListNode *removeElements(ListNode *head, int val)
//     {
//         if(head == NULL){
//             return head;
//         }

//         head->next = removeElements(head->next,val);

//         return head->val == val ? head->next : head;
//     }//TODO
// };

// //由于过于神奇，我可能下次还是想不出来!


// // @lc code=end
