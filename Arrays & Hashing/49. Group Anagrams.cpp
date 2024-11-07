// Problem Link: https://leetcode.com/problems/group-anagrams/submissions/1443553420/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>>mp;
        for(auto &c:strs){
            vector<int>vc(26,0);
            for(auto &cc:c)vc[cc-'a']++;
            mp[vc].push_back(c);
        }
        vector<vector<string>>ans;
        for(auto &c:mp){
            ans.push_back(c.second);
        }
        return ans;
    }
};

// Time Complexity : O(N*N*26) => O(N^2);
// Space Complexity: O(N);