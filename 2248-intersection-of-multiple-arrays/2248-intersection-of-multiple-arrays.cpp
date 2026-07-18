class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>mp;
        for(auto &x:nums){
            unordered_set<int>st(x.begin(),x.end());
            
            for(int k:x){
                mp[k]++;
            }
        }
        
        vector<int>ans;
        for(auto &it:mp){
            if(it.second==nums.size()){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};