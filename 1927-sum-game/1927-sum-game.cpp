class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int diff=0;
        int nq=0;

        for(int i=0;i<n/2;i++){
            if(num[i]=='?'){
                nq++;
            }
            else{
                diff+=num[i]-'0';
            }
        }
        for(int i=n/2;i<n;i++){
            if(num[i]=='?'){
                nq--;
            }
            else{
                diff-=num[i]-'0';
            }
        }

        if(nq%2!=0){
            return true;
        }
        return diff!=-9*nq/2;
    }
};