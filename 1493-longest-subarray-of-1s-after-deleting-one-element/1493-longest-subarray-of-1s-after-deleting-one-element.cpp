class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start=0;
        int zero=0;
        int mcount=0;
        for(int end=0;end<nums.size();end++){
            if(nums[end]==0){
                zero++;
            }
            while(zero>1){
                if(nums[start]==0){
                    zero--;
                }
                start++;
            }
            mcount=max(mcount,end-start);
        }
        return mcount;
    }
};