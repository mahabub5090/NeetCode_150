// Problem Link: https://leetcode.com/problems/valid-anagram/description/

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         return s==t;
//     }
// };

// Time Complexity : O(2*NlogN) => O(NlogN);
// Space Complexity: O(1);

// Way-2 =>

class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char,int>mp,mp2; for(auto &c:s)mp[c]++;
       for(auto &c:t)mp2[c]++;
       for(auto &c:t){
        if(mp[c]!=mp2[c])return 0;
       }
       if(s.size()!=t.size())return 0;
       return 1;
    }
};

// Time Complexity : O(3*N) => O(N);
// Space Complexity: O(2*N) => O(N);
