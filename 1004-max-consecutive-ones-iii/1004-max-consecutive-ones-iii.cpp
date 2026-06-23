class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0;
        int zerocount=0;
        int left=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zerocount++;
            }
            while(zerocount>k){
                if(nums[left]==0){
                    zerocount--;
                }
                left++;
            }
            maxlen=max(maxlen,i-left+1);
            
        }
        return maxlen;
    }
};