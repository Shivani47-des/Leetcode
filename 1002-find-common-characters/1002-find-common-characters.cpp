class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int>mp;
        vector<string>ans;
        for(char ch:words[0]){
            mp[ch]++;
        }
        for(int i=0;i<words.size();i++){
            unordered_map<char,int>freq;
            for(char ch:words[i]){
                freq[ch]++;
            }

            for(auto &it:mp){
                char ch=it.first;

                if(freq.find(ch)!=freq.end()){
                    it.second=min(it.second,freq[ch]);
                }
                else{
                    it.second=0;
                }
            }
        }
        for(auto &it:mp){
            while(it.second>0){
                ans.push_back(string(1,it.first));
                it.second--;
            }
        }
        return ans;
    }
};