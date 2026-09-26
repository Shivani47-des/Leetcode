class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        string res="";
        for(auto &x:knowledge){
            mp[x[0]]=x[1];
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                int j=i+1;
                string key="";
                while(s[j]!=')'){
                    key+=s[j];
                    j++;
                }
                if(mp.find(key)!=mp.end()){
                    res+=mp[key];
                }
                else{
                    res+='?';
                }
                i=j;
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};