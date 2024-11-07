// Problem Link: https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto &c:nums)mp[c]++;
        vector<pair<int,int>>vc;
        for(auto &c:mp){
            vc.push_back({c.second,c.first});
        }
        sort(vc.rbegin(),vc.rend());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(vc[i].second);
        }
        return ans;
        
    }
};

// TIme Complexity : O(2*N) => O(N); 
// Space Complexity: O(2*N) => O(N); 