class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        unordered_set<int>st;
        for(int x:nums1){
            st.insert(x);
        }
        for(int x:nums2){
            if(st.count(x)){
                res.push_back(x);
                st.erase(x);
            }
        }
        return res;
    }
};