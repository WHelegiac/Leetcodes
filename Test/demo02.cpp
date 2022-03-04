/*
 * @Author: WanHao
 * @Date: 2022-02-28 17:14:06
 * @LastEditors: Do not edit
 * @LastEditTime: 2022-02-28 18:16:15
 * @FilePath: \my_leetcodes_question_answers\Test\demo02.cpp
 * @FileDescription: Lazy~~~
 */
// /*
//  * @Author: WanHao
//  * @Date: 2022-02-28 17:14:06
//  * @LastEditors: Do not edit
//  * @LastEditTime: 2022-02-28 18:13:36
//  * @FilePath: \my_leetcodes_question_answers\Test\demo02.cpp
//  * @FileDescription: Lazy~~~
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
// using namespace std;

// class Solution
// {
// public:
//     bool isPalindrome(string s)
//     {
//         if (s.size() == 0)
//         {
//             return true;
//         }

//         vector<char> vec;

//         for (int i = 0; i < s.size(); i++)
//         {
//             cout<<"是字母吗?"<<isalpha(s[i])<<endl;
//             if (isalpha(s[i]) || isdigit(s[i]))
//             {
//                 cout<<"是字母"<<endl;
//                 char c = tolower(s[i]);
//                 vec.push_back(c);
//             }
//         }


//         for(char c : vec){
//             cout<<c;
//         }
//         cout<<endl;

//         int i = 0, j = vec.size() - 1;

//         for (; i < j; i++, j--)
//         {
//             cout<<"cao";
//             cout<<vec[i]<<"=="<<vec[j]<<endl;
//             if (vec[i] != vec[j])
//             {
//                 return false;
//             }
            
//         }

//         return true;
//     }
// };

// int main()
// {
//     Solution().isPalindrome("0P");
//     //cout<<tolower('A');
// }