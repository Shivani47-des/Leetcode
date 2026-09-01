class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            bool left=(mid==0 || nums[mid]>nums[mid-1]);
            bool right=(mid==nums.size()-1 || nums[mid]>nums[mid+1]);

            if(left && right){
                return mid;
            }
            if(mid<nums.size()-1 && nums[mid]<nums[mid+1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};