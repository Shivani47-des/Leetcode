class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>answer(2);
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int x:nums1){
            mp1[x]++;
        }
        for(int x:nums2){
            mp2[x]++;
        }
        for(auto &it:mp1){
            if(mp2.find(it.first)==mp2.end()){
                answer[0].push_back(it.first);
            }
        } 
        for(auto &it:mp2){
            if(mp1.find(it.first)==mp1.end()){
                answer[1].push_back(it.first);
            }
        }         
       return answer;

    }
};