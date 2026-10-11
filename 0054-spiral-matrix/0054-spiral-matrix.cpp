class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0,bottom=matrix.size()-1;
        int left=0,right=matrix[0].size()-1;
        vector<int>result;
        while(left<=right && top<=bottom){
            for(int j=left;j<=right;j++){
                result.push_back(matrix[top][j]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int j=right;j>=left;j--){
                    result.push_back(matrix[bottom][j]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }

        }
        return result;
    }
};