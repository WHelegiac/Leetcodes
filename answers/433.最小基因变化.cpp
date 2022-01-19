/*
 * @Author: WanHao
 * @Date: 2021-11-10 22:01:15
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-10 22:08:47
 * @FilePath: \my_leetcodes_question_answers\433.最小基因变化.cpp
 * @FileDescription: 当天晚上太过乏困，待做！ TODO
 */
/*
 * @lc app=leetcode.cn id=433 lang=cpp
 *
 * [433] 最小基因变化
 */

// @lc code=start

#include <vector>
#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> s(bank.begin(),bank.end());//利用集合快速查询，本质还是哈希表
        if(!s.count(end)) return -1;
        unordered_set<string> mp{start};//记录当前节点是否出现过
        queue<string> q({start});
        int path{-1};//记录路径长度，由于是记录变换次数，所以-1开始
        while(!q.empty()){
            int len=q.size();//当前层得节点个数
            path+=1;//路径长度加一
            for(int i=0;i<len;++i){
                string temp=q.front();
                q.pop();
                if(temp==end) return path;//由于是BFS，所以找到即为最小值
                for(int j=0;j<temp.size();++j){
                    char c=temp[j];
                    for(int k=0;k<4;++k){
                        if(k==0)temp[j]='A';
                        else if(k==1)temp[j]='C';
                        else if(k==2)temp[j]='G';
                        else temp[j]='T';
                        if(!mp.count(temp)&&s.count(temp)){//当前节点以前没出现过，且在基因库里面
                            q.push(temp);
                            mp.insert(temp);
                        }
                    }
                    temp[j]=c;//改变得还原回来
                }
            }
        }
        return -1;
    }
};
//TODO



// @lc code=end

