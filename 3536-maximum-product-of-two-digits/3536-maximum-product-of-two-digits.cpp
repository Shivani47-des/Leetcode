class Solution {
public:
    int maxProduct(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        int j=s.size();
        int k=(s[j-1]-'0')*(s[j-2]-'0');
        return k;


    }
};