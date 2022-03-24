// /*
//  * @lc app=leetcode.cn id=414 lang=cpp
//  *
//  * [414] 第三大的数
//  */

// // @lc code=start

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

// class Solution
// {
// public:
//     int thirdMax(vector<int> &nums)
//     {
//         set<int> s;
//         for(int num : nums){
//             s.insert(num);
//             if(s.size() > 3){
//                 s.erase(s.begin());
//             }
//         }

//         return s.size() == 3 ? *s.begin() : *s.rbegin();
//     }
// }

// ;

//巧用数据结构是多么的重要
// // @lc code=end
