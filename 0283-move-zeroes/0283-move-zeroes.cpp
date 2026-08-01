class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>arr;
        for(int x:nums){
            if(x!=0){
                arr.push_back(x);
            }
        }
        for(int x:nums){
            if(x==0){
                arr.push_back(x);
            }
        }
        nums=arr;
        
    }
};