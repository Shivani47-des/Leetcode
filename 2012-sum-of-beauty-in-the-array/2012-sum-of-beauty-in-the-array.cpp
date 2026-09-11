class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        vector<int>suffixmin(n);
        suffixmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixmin[i]=min(nums[i],suffixmin[i+1]);
        }
        int ans=0;
        int prefixmax=nums[0];
        for(int i=1;i<n-1;i++){
            if(prefixmax<nums[i] && nums[i]<suffixmin[i+1]){
                ans+=2;
            }
            else if(nums[i-1]<nums[i] && nums[i]<nums[i+1]){
                ans+=1;
            }
            prefixmax=max(prefixmax,nums[i]);
        }
        return ans;
    }
};