class Solution {
public:
    int countGoodSubstrings(string s) {
        int res=0;
        if(s.size()<3){
            return 0;
        }
        for(int i=0;i<=s.size()-3;i++){
            bool seen[256]={false};
            bool unique=true;
            for(int j=i;j<i+3;j++){
                if(seen[s[j]]){
                    unique=false;
                    break;
                }
                seen[s[j]]=true;
            }
            if(unique){
                res++;
            }
            
        }
        return res;
    }
};