


// @lc code=start
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        //长度不等直接false
        if(s.size() != t.size())
            return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        
        // return s == t;

        //以上很牛逼，但时间复杂度为N*logN

        vector<int> v(26,0);
        for(int i = 0; i <s.size();i++){
            v[s[i] - 'a']++;
        }
        for(int i = 0; i <t.size();i++){
            v[t[i] -'a']--;
            if(v[t[i] -'a'] < 0)
                return false;
        }

        return true;
    }
};
// @lc code=end

