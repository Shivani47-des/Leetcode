class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int cols=grid[0].size();
        int rows=grid.size();
        k%=(rows*cols);
        while(k--){
            vector<vector<int>>temp(rows,vector<int>(cols));
            for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    if(j!=cols-1){
                        temp[i][j+1]=grid[i][j];
                    }
                    else if(i!=rows-1){
                        temp[i+1][0]=grid[i][j];
                    }
                    else{
                        temp[0][0]=grid[i][j];
                    }
                }
            }
            grid=temp;
        }
        return grid;
        
    }
};