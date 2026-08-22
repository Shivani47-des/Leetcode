class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int write=0;
        while(i<chars.size()){
            int count=0;
            char ch=chars[i];
            while(i<chars.size() && chars[i]==ch){
                count++;
                i++;
            }
            chars[write++]=ch;
            if(count>1){
                string s=to_string(count);
                for(char c:s){
                    chars[write++]=c;
                }
            }

        }
        return write;
    }
};