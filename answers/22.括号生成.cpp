/*
 * @Author: WanHao
 * @Date: 2021-11-08 21:36:39
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-08 21:48:40
 * @FilePath: \my_leetcodes_question_answers\22.括号生成.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        //TODO
    }
};



class solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        addingpar(res, "", n, 0);
        return res;
    }
   
    void addingpar(vector<string> &v, string str, int n, int m){
        if(n==0 && m==0) {
            v.push_back(str);
            return;
        }
        if(m > 0){ addingpar(v, str+")", n, m-1); }
        if(n > 0){ addingpar(v, str+"(", n-1, m+1); }
    }
};
// @lc code=end

