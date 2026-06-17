class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        set<int> rows,cols;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(int r:rows){
            for(int k=0;k<m;k++){
                matrix[r][k]=0;
            }
        }
        for(int c:cols){
            for(int k=0;k<n;k++){
                matrix[k][c]=0;
            }
        }
    }
};