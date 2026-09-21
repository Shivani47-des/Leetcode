class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        int n=words.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                string s=words[i];
                string t=words[j];
                bool prefix=true;
                for(int k=0;k<s.size();k++){
                    if(s[k]!=t[k]){
                        prefix=false;
                        break;
                    }
                }
                bool suffix=true;
                int start=t.size()-s.size();
                if(start<0){
                    suffix=false;
                }
                else{
                    for(int k=0;k<s.size();k++){
                        if(s[k]!=t[start+k]){
                            suffix=false;
                            break;
                        }
                    }
                }
                if(prefix && suffix){
                    ans++;
                }
            }
        }
        return ans;
    }
};