class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int left=0;
        int right=0;
        int hash=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='R'){
                right++;
            }
            else if(moves[i]=='L'){
                left++;
            }
            else{
                hash++;
            }
        }
        return hash+abs(right-left);

    }
};