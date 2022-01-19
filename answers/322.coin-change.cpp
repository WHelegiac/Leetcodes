/*
 * @Author: WanHao
 * @Date: 2021-12-07 14:07:54
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-12-07 14:35:32
 * @FilePath: \Vue Demosd:\my_leetcodes_question_answers\322.coin-change.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
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
using namespace std;

// @lc code=start
class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        
    }

private:
    int DP(vector<int>& coins,int requires)
    {
        if(requires == 0){
            return 0;
        }
        if(requires < 0){
            return -1;
        }
        for(int coin: coins){
            req = min(req, 1 + DP(coins,requires - coin));
        }
        return
    }
};
// @lc code=end
