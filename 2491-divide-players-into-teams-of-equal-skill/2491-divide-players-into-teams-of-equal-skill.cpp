class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        sort(skill.begin(),skill.end());
        int sum=skill[0]+skill[n-1];
        long long products=0;
        int l=0;
        int r=n-1;
        int count=0;
        while(l<r){
            if(skill[l]+skill[r]==sum){
                count++;
                products+=(skill[l]*skill[r]);
                l++;
                r--;
            }
            else if(skill[l]+skill[r]>sum){
                r--;
            }
            else{
                l++;
            }
        }
        if(count==n/2){
            return products;
        }
        return -1;
        
    }
};