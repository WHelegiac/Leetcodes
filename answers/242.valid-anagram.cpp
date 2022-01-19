/*
 * @Author: WanHao
 * @Date: 2021-11-25 10:32:10
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-25 10:59:18
 * @FilePath: \my_leetcodes_question_answers\242.valid-anagram.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start

#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {

        if( s.size() != t.size()){
            return false;
        }
        int hash[26] = {0};

        for(int i = 0; i < s.size();i++){
            hash[s[i]-'a']++;
        }
        for(int i =0; i <t.size();i++){
            hash[t[i]-'a']--;
            if(hash[t[i] -'a'] < 0){
                return false;
            }
        }
        return true;
        
    }
};



// int main(){
//     string s = "a";
//     string t = "b";

//     cout <<Solution().isAnagram(s,t);
// }
// @lc code=end

