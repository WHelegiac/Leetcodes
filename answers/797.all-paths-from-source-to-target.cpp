/*
 * @Author: WanHao
 * @Date: 2021-12-06 14:53:04
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-12-06 15:16:46
 * @FilePath: \my_leetcodes_question_answers\797.all-paths-from-source-to-target.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode id=797 lang=cpp
 *
 * [797] All Paths From Source to Target
 */

// @lc code=start

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

class Solution
{
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        target = graph.size() -1;
        traverse(graph);
        return res;
    }
private:
    vector<vector<int>> res;
    int target;
    vector<int> path;

    void traverse(vector<vector<int>>& graph,int curNode = 0){
        path.push_back(curNode);

        if(curNode == target){
            res.push_back(path);
        }else{
            for(int node : graph[curNode]){
                traverse(graph,node);
            }
        }
        path.pop_back();
    }
};
// @lc code=end
