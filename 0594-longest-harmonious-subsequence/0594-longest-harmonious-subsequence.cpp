class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mp;
        int res=0;
        for(int x:nums){
            mp[x]++;
        }
        for(auto it:mp){
            int y=it.first;

            if(mp.find(y+1)!=mp.end()){
                res=max(res,mp[y]+mp[y+1]);
            }
        }
        return res;
    }
};