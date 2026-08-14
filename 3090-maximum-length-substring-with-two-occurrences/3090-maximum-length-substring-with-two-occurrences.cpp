class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int ans=0;
        int x=0;
        for(int y=0;y<s.size();y++){
            mp[s[y]]++;

            while(mp[s[y]]>2){
                mp[s[x]]--;
                x++;
            }
            ans=max(ans,y-x+1);
        }
        return ans;
    }
};