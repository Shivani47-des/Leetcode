class Solution {
public:
    int numDifferentIntegers(string word) {

        string ans = "";

        for(char ch : word) {
            if(!isalpha(ch)) {
                ans.push_back(ch);
            }
            else {
                ans.push_back('_');
            }
        }

        unordered_set<string> st;

        for(int i = 0; i < ans.size(); i++) {

            if(ans[i] != '_') {

                string key = "";
                int j = i;

                while(j < ans.size() && ans[j] != '_') {
                    key += ans[j];
                    j++;
                }

                
                int pos = 0;
                while(pos < key.size() - 1 && key[pos] == '0') {
                    pos++;
                }

                key = key.substr(pos);

                st.insert(key);

                i = j - 1;
            }
        }

        return st.size();
    }
};