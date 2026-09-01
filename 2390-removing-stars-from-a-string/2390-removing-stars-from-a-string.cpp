class Solution {
public:
    string removeStars(string s) {
        string ss;
        stack<char>st;
        for(char ch:s){
            if(ch!='*'){
                st.push(ch);
            }
            else{
                st.pop();
            }
        }
        while(!st.empty()){
            ss.push_back(st.top());
            st.pop();
        }
        reverse(ss.begin(),ss.end());
        return ss;

    }
};