class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int fast=numbers.size()-1;
        int slow=0;
        while(slow<fast){
            int sum=numbers[slow]+numbers[fast];
            if(sum<target){
                slow++;
            }
            else if(sum>target){
                fast--;
            }
            else{
                return {slow+1,fast+1};
            }
        }
        return {};
        
        
    }
};