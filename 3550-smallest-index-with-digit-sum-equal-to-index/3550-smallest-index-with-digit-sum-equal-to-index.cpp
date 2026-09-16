class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            if(nums[i]==0){
                sum=0;
            }
            while(nums[i]!=0){
                int j=nums[i]%10;
                sum+=j;
                nums[i]/=10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
};