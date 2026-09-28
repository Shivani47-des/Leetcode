class Solution {
public:
    int maxDepth(string s) {
        int right=0;
        int left=0;
        int maxi=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                left++;
            }
            else if(s[i]==')'){
                right++;
            }
            
            maxi=max(maxi,(left-right));
        }
        return maxi;
    }
};