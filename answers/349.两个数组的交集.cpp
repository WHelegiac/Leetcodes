/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
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
#include <deque>
#include <cmath>
#include <queue>
#include <cctype>
#include <utility>
#include <algorithm>
using namespace std;

// class Solution
// {
// public:
//     vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
//     {
//         set<int> ret;
//         set<int> hash;
//         for (int num : nums1)
//         {
//             hash.insert(num);
//         }
//         for (int num : nums2)
//         {
//             if (hash.find(num) != hash.end())
//             {
//                 ret.insert(num);
//             }
//         }
//         vector<int> ans(ret.begin(),ret.end());
//         return ans;
//     }
// };

//以上虽然比较省时间
//但也比较废空间
//双指针法排上用场了

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ret;
        if (nums1.size() == 0 || nums2.size() == 0)
        {
            return ret;
        }

        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());


        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            
            if(nums1[i] == nums2[j]){
                if(ret.size() ==0 || ret.back() != nums1[i]){
                    ret.push_back(nums1[i]);
                    //cout<<"Start!"<<endl;
                }
                i++;j++;
            }else if( nums1[i] < nums2[j]){
                i++;
            }else{
                j++;
            }
        }

        return ret;
    }
};


// int main(){

//     vector<int> nums1{1,2,2,1};
//     vector<int> nums2{2,2};
//     vector<int> ans = Solution().intersection(nums1,nums2);
//     for(int num : ans){
//         cout<<num<<" ";
//     }
// }

// @lc code=end
