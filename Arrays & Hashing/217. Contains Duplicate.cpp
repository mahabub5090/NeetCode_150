// Problem Link: https://leetcode.com/problems/contains-duplicate/description/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(auto &c:nums){
            if(mp[c])return 1;
            mp[c]++;
        }
        return 0;
    }
};

// Time Complexity : O(N);
// Space Complexity: O(N);