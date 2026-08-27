class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(char ch:word1){
            mp1[ch]++;
        }
        for(char ch:word2){
            mp2[ch]++;
        }
        for(auto &it:mp1){
            if(mp2.find(it.first)==mp2.end()){
                return false;
            }
        }
        for (auto &it : mp2) {
            if (mp1.find(it.first) == mp1.end()) {
                return false;
            }
        }

        vector<int>fq1,fq2;
        for(auto &it:mp1){
            fq1.push_back(it.second);
        }
        for(auto &it:mp2){
            fq2.push_back(it.second);
        }
        sort(fq1.begin(),fq1.end());
        sort(fq2.begin(),fq2.end());

        return fq1==fq2;
        
    }
};