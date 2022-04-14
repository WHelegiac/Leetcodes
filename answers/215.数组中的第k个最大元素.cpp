/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
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

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         return nums[k-1];
//     }

// };

//调库刷算法题是一种不齿行为！

//以下基于二路快排与二分搜索
class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        int l = 0, r = nums.size() - 1;
        int target = nums.size() - k;
        while (l < r)
        {

            int mid = quickSort(nums, l, r);

            // //测试
            // for (int num : nums)
            // {
            //     cout << num << " ";
            // }

            // //测试
            // cout << "  mid == " << mid << endl;

            if (mid == target)
            {
                return nums[mid];
            }
            else if (mid < target)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return nums[l];
    }

    int quickSort(vector<int> &nums, int l, int r)
    {
        //在[l,r]范围内进行排序
        int value = nums[l];
        int i = l + 1, j = r;
        while (true)
        {
            while (i < r && nums[i] <= value)
            {
                i++;
            }
            while (j > l && nums[j] >= value)
            {
                j--;
            }

            if (i >= j)
            {
                break;
            }
            swap(nums[i], nums[j]);
        }
        swap(nums[l], nums[j]);
        return j;
    }
};

int main()
{
    vector<int> test{3, 2, 1, 5, 6, 4};
    cout << Solution().findKthLargest(test, 2);
}

// @lc code=end
