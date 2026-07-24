class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int pr2=cost[0];
        int pr1=cost[1];
        for(int i=2;i<cost.size();i++){
            int curr=cost[i]+min(pr2,pr1);
            pr2=pr1;
            pr1=curr;
        }
        return min(pr1,pr2);
    }
};