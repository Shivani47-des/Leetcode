class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        while(k--){
            int max=0;
            int num;
            for(auto it:mp){
                if(it.second>max){
                    max=it.second;
                    num=it.first;
                }
            }
            ans.push_back(num);
            mp.erase(num);
        }
        
      return ans;
    }  

    
};