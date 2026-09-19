class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        vector<int>price;
        vector<int>beauty;
        int maxi=0;
        for(auto &it:items){
            price.push_back(it[0]);
            maxi=max(maxi,it[1]);
            beauty.push_back(maxi);
        }
        vector<int>res;
        for(int q:queries){
            int idx=upper_bound(price.begin(),price.end(),q)-price.begin();
            if(idx==0){
                res.push_back(0);
            }
            else{
                res.push_back(beauty[idx-1]);
            }
        }
        return res;
    }
};