// Problem Link: https://leetcode.com/problems/longest-consecutive-sequence/description/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;for(auto &c:nums)st.insert(c);
        int ans=0,cnt=0,curr;
        for(auto &c:st){
            if(st.find(c-1)==st.end()){
                cnt=0;
                curr=c;
                while(st.find(curr)!=st.end()){
                    cnt++;
                    curr++;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};

// Time Complexity : O(N); // we iterate in the set at most 2 times;
// Space Complexity: O(N);