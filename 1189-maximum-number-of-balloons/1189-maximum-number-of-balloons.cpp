class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s="balloon";
        unordered_map<char,int>mp;
        for(char ch:text){
            mp[ch]++;
        }
        int maxballoons=min({mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});
        return maxballoons;

    }
};