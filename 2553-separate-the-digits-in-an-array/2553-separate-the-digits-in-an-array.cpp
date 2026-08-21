class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int>temp;
        for(int i=nums.size()-1;i>=0;i--){
            while(nums[i]>0){
                temp.push_back(nums[i]%10);
                nums[i]/=10;
            }
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};