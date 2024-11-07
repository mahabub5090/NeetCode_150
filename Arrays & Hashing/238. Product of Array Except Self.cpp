// Problem Link: https://leetcode.com/problems/product-of-array-except-self/description/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int tt=1,cnt=0;
        for(auto &c:nums){
            if(c==0)cnt++;
            else tt*=c;
        };
        vector<int>ans;
        for(auto &c:nums){
            if(c==0){
                if(cnt==1)ans.push_back(tt);
                else ans.push_back(0);
            }
            else if(c<0)ans.push_back(-(tt/abs(c)));
            else ans.push_back(tt/c);
        }
        if(cnt){
            for(int i=0;i<nums.size();i++){
                if(nums[i])ans[i]=0;
            }
        }
        return ans;
    }
};

// Time Complexity : O(3*N) => O(N);
// Space Complexity: O(N); // for output;