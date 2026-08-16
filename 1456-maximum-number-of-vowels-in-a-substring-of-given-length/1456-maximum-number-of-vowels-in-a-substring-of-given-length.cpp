class Solution {
public:
    bool vowels(char ch){
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
            
    }

    int maxVowels(string s, int k) {
        int mcount=0;
        int count=0;
        for(int i=0;i<k;i++){
            if(vowels(s[i])){
                count++;
            }
        }
        mcount=count;
        for(int i=k;i<s.size();i++){
            if(vowels(s[i])){
                count++;
            }
            if(vowels(s[i-k])){
                count--;
            }
            mcount=max(mcount,count);
        }
        return mcount;
    }

};