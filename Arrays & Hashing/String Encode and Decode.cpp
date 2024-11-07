// Problem Link: https://neetcode.io/problems/string-encode-and-decode

class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(auto &c:strs)s+=to_string(c.size())+'='+c;
        return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string cmp,num="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='=')num+=s[i];
            else{
                int prev=i;
                while(i<prev+stoi(num))cmp+=s[++i];
                ans.push_back(cmp);
                cmp="";
                num="";
            }
        }
        return ans;
    }
};

// Time Complexity : O(N);
// Space Complexity: O(N);