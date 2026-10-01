class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int pr1=cost[0];
        int pr2=cost[1];
        for(int i=2;i<cost.size();i++){
            int current=cost[i]+min(pr1,pr2);
            pr1=pr2;
            pr2=current;
        }
        return min(pr1,pr2);

    }
};