class Solution {
public:
    void rowzero(int x, int cols, vector<vector<int>>& matrix){
        for(int j = 0; j < cols; j++){
            if(matrix[x][j] != 0) matrix[x][j] = -999;
        }
    }
    void colzero(int x, int rows, vector<vector<int>>& matrix){
        for(int i = 0; i < rows; i++){
            if(matrix[i][x] != 0) matrix[i][x] = -999;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();               // number of rows
        int cols = matrix[0].size();            // number of columns (in the first row)
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    rowzero(i,cols,matrix);
                    colzero(j,rows,matrix);
                }
            }
        }
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == -999)
                    matrix[i][j] = 0;
            }
        }
    }
};