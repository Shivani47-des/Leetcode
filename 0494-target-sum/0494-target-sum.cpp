class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalsum=0;
        for(int x:nums){
            totalsum+=x;
        }
        if(abs(target)>totalsum){
            return 0;
        }
        if((totalsum+target)%2!=0){
            return 0;
        }
        int need=(totalsum+target)/2;
        vector<int>dp(need+1,0);
        dp[0]=1;
        for(int x:nums){
            for(int j=need;j>=x;j--){
                dp[j]+=dp[j-x];
            }
        }
        return dp[need];

    }
};