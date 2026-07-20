class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_map<int,int>mp;
       unordered_set<int>st;
       for(int x:nums){
        mp[x]++;
        st.insert(x);
       }
       int lgst=0;
       for(int x:st){
            if(st.find(x-1)==st.end()){
                int curr=x;
                int len=1;

                while(st.find(curr+1)!=st.end()){
                    curr++;
                    len++;
                }
                lgst=max(lgst,len);
            }
       } 
       return lgst;
       
    }
};