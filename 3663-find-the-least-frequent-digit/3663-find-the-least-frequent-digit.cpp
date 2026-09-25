class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int>mp;
        while(n!=0){
            int digit=n%10;
            mp[digit]++;
            n/=10;
        }
        int mini=INT_MAX;
        int resultDigit=INT_MAX;
        for(auto &it:mp){
            int first=it.first;
            int second=it.second;
            if(second<mini || (second==mini && first<resultDigit)){
                mini=second;
                resultDigit=first;
            }
        }
        return resultDigit;
    }
};