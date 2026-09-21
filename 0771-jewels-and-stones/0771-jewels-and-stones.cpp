class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        for(char ch:stones){
            mp[ch]++;
        }
        int count=0;
        for(char ch:jewels){
            count+=mp[ch];
        }
        return count;
    }
};