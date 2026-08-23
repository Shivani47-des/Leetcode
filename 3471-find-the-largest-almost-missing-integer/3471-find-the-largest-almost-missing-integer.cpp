class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        int n=nums.size();
        for(int i=0;i<=n-k;i++){
            unordered_set<int>freq;
            for(int j=i;j<i+k;j++){
                freq.insert(nums[j]);
            }
            for(int num:freq){
                count[num]++;
            }
        }
        int ans=-1;
        for(auto &[num,freq]:count){
            if(freq==1){
                ans=max(ans,num);
            }
        }
        return ans;
    }
};