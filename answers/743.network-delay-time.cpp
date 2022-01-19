// /*
//  * @Author: WanHao
//  * @Date: 2021-12-10 16:49:41
//  * @LastEditors: Do not edit
//  * @LastEditTime: 2022-01-09 20:46:12
//  * @FilePath: \my_leetcodes_question_answers\743.network-delay-time.cpp
//  * @FileDescription: Lazy~~~
//  */
// // /*
// //  * @lc app=leetcode id=743 lang=cpp
// //  *
// //  * [743] Network Delay Time
// //  */

// // // @lc code=start

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

//     struct Edge{
//         int from;
//         int to;
//         int weight;

//         Edge(int f,int t,int w){
//             this->from = f;
//             this->to = t;
//             this->weight = w;
//         }
//     };

//     class State{
//     public:
//         int node;
//         int fromDist;

//         State(int n,int f){
//             this->node = n;
//             this->fromDist = f;
//         }

//         bool operator<(State& state){
//             return this->fromDist > state.fromDist;
//         }
//     };

//     int networkDelayTime(vector<vector<int>> &times, int n, int k)
//     {
//         // vector<pair<int, int>> graph[n + 1];
//         // for (int i = 0; i < times.size(); i++)
//         // {
//         //     graph[times[i][0]].push_back(make_pair(times[i][1], times[i][2]));
//         // }

//         // vector<int> dist(n + 1, INT_MAX);
//         // dist[k] = 0;
//         // priority_queue<pair<int, int>, vector<int, int>, greater<pair<int, int>>> q;

//         // q.push(make_pair(0, k));

//         // pair<int, int> temp;
//         // bool visited[n+ 1];
//         // memset(visit, false, sizeof(visit));
//         // while (!q.empty())
//         // {
//         //     temp = q.top();
//         //     q.pop();
//         //     int u = temp.second;
//         //     visited[u] = true;
//         //     for (int i = 0; i < graph[u].size(); i++)
//         //     {
//         //         int disToNextNode = 
//         //     }
//         // }

//         // return -1;

//         vector<vector<Edge>> graph = vector<vector<Edge>>(n +1,vector<Edge>());

//         for(auto edge : times){
//             Edge e(edge[0],edge[1],edge[2]) ;
//             graph[edge[0]].push_back(e);
//         }

//         vector<int> disTo = vector<int>(n +1,INT_MAX);
//         disTo[k] = 0;

        

//         priority_queue<State> pq;
//         State state(k,0);
//         pq.push(state);

//         while(!pq.empty()){
//             State curState = pq.top();
//             pq.pop();

//             int curNode = curState.node;
//             int curDistFromStart = curState.fromDist;

//             if(curDistFromStart > disTo[curNode]){
//                 continue;
//             }

//             for(auto nextNode : graph[curNode]){
//                 int disTpNextNode = disTo[curNode] + 
//             }

//         }
        

//     }
// };
// // // @lc code=end
