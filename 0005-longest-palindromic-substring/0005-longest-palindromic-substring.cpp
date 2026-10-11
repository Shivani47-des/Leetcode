class Solution {
public:
    string longestPalindrome(string s) {
        int start=0, maxlength=0;
        for(int i=0;i<s.size();i++){
            int left=i,right=i;
            while(left>=0 && right<s.size() && s[left]==s[right]){
                left--;
                right++;
            }
            if(right-left-1>maxlength){
                start=left+1;
                maxlength=right-left-1;
            }
            left=i,right=i+1;
            while(left>=0 && right<s.size() && s[left]==s[right]){
                left--;
                right++;
            }
            if(right-left-1>maxlength){
                start=left+1;
                maxlength=right-left-1;
            }

        }
        return s.substr(start,maxlength);
    }
};