/*
 * @Author: WanHao
 * @Date: 2021-11-15 20:40:23
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-15 23:13:46
 * @FilePath: \my_leetcodes_question_answers\785.判断二分图.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=785 lang=cpp
 *
 * [785] 判断二分图
 */

// @lc code=start
#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {

private:
    vector<bool> visited;
    vector<int> colors;
    vector<vector<int>> Graph;

    bool graphDFS(int v, int color){
        visited[v] = true;
        colors[v] = color;
        for(int w : this.Graph[v] ){
            if(!visited[v]){
                
            }
        }

    }
public:
    
    bool isBipartite(vector<vector<int>>& graph) {
        this.Graph = graph;
        int vertex_nums = graph.size();
        for(int i = 0; i < vertex_nums ;i++){
            if( visited[i] == false){
                if( graphDFS(i,0) == false){
                    return false;
                }
            }
        }
        return true;
    }

    
};
// @lc code=end

