class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[maxi]){
                maxi=i;
            }
            if(nums[i]<nums[mini]){
                mini=i;
            }
        }
        if(mini>maxi){
            swap(mini,maxi);
        }
        int left=maxi+1;
        int right=nums.size()-mini;
        int bothside=(mini+1)+(nums.size()-maxi);

        return min({left,right,bothside});
    }
    
};