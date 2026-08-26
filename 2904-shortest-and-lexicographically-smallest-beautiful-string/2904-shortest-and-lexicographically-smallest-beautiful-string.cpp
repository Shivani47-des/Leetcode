class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ans.push_back(i);
            }
        }
        if(ans.size()<k){
            return "";
        }
        string st="";
        for(int i=0;i+k-1<ans.size();i++){
            int start=ans[i];
            int end=ans[i+k-1];

            string curr=s.substr(start,end-start+1);

            if(st.empty() || curr.length()<st.length() || (curr.length()==st.length() && curr<st)){
                st=curr;
            }
        }
        return st;
    }
};