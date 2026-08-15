class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr=0;
        int cntnonzero=0;
        for(int x:nums){
            xr^=x;

            if(x!=0){
                cntnonzero++;
            }
        }
        if(xr!=0){
            return nums.size();
        }
        if(cntnonzero==0){
            return 0;
        }
       
        return nums.size()-1;
        
    }
};