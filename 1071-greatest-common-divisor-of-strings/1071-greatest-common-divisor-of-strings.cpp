class Solution {
public:
    bool check(string s,string t){
        string temp="";
        while(temp.size()<s.size()){
            temp+=t;
        }
        return temp==s;
    }
    string gcdOfStrings(string str1, string str2) {
        int l=min(str1.size(),str2.size());
        for(int i=l;i>=1;i--){
            string t=str1.substr(0,i);

            if(check(str1,t) && check(str2,t)){
                return t;
            }
        }
        return "";
    }
};