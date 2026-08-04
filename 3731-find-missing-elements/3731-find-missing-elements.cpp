class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        if(nums.empty()){
            return ans;
        }
        unordered_map<int,int>mp;
        sort(nums.begin(),nums.end());
        for(int x:nums){
            mp[x]++;
        }
        
        for(int i=nums[0];i<=nums[n-1];i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};