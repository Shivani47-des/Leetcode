class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>res;
        for(long long x:spells){
            int low=0;
            int high=potions.size()-1;
            int psize=potions.size();
        
            while(low<=high){
                int mid=low+(high-low)/2;

                if(x*potions[mid]>=success){
                    psize=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }

            }
            res.push_back(potions.size()-psize);
        

            
        }
        return res;
    }
};