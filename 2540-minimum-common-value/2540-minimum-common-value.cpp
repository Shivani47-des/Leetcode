class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st;
        for(int x:nums1){
            st.insert(x);
        }
        int ans=INT_MAX;
        for(int x:nums2){
            if(st.count(x)){
                ans=min(ans,x);
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};