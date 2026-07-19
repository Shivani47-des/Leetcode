class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int>mp;
        unordered_set<char>st;
        string str;
        for(char ch:s){
            mp[ch]++;
        }
        for(char ch:s){
            mp[ch]--;
            if(st.count(ch))
                continue;
            while(!str.empty() && str.back()>ch && mp[str.back()]>0){
                st.erase(str.back());
                str.pop_back();
            }
            str.push_back(ch);
            st.insert(ch);
        }
        return str;
        
    }
};