class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        unordered_map<char,string>mp1;
        unordered_map<string,char>mp2;
        int i=0;
        while(ss>>word){
            if(i>pattern.size()){
                return false;
            }
            char ch=pattern[i];
            if(mp1.find(ch)!=mp1.end()){
                if(mp1[ch]!=word){
                    return false;
                }
            }
            if(mp2.find(word)!=mp2.end()){
                if(mp2[word]!=ch){
                    return false;
                }
            }
            mp1[ch]=word;
            mp2[word]=ch;
            i++;
        }
        return i==pattern.size();
    }
};