// /*
//  * @lc app=leetcode.cn id=7 lang=cpp
//  *
//  * [7] 整数反转
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
// #include <cctype>
// #include <utility>
// #include <algorithm>
// using namespace std;



// // class Solution
// // {
// // public:
// //     int reverse(int x)
// //     {
// //         if (x == 0)
// //         {
// //             return 0;
// //         }
// //         bool flag = x > 0 ? true : false;
// //         queue<int> decimalBits;
// //         while (x != 0)
// //         {
// //             //cout<<"!"<<endl;
// //             int num = abs(x % 10);
// //             decimalBits.push(num);
// //             x /= 10;
// //         }
// //         int ret = 0;
// //         while(!decimalBits.empty()){
// //             int top = decimalBits.front();
// //             ret = ret * 10 + top;
// //             decimalBits.pop();
// //         }
// //         return flag ? ret : -1*ret;
// //     }
// // }


// //以上方法可以解决一些平常的问题
// //但是啊但是!!!
// //会整形益处

// //TODO
// class Solution {
// public:
//     int reverse(int x) {
//         int rev = 0;
//         while (x != 0) {
//             if (rev < INT_MIN / 10 || rev > INT_MAX / 10) {
//                 return 0;
//             }
//             int digit = x % 10;
//             x /= 10;
//             rev = rev * 10 + digit;
//         }
//         return rev;
//     }
// };
// //自愧不如!连队列都不需要用了！！！



// // 

// // @lc code=end
