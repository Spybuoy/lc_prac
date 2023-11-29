class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        int i, j;
        bool zeroFirstRow = false;
        bool zeroFirstCol = false;
        
        for(i = 0; i<r; i++){
            for(j=0; j<c;j++){
                if(matrix[i][j]==0){
                    if(i==0) zeroFirstRow = true;
                    if(j==0) zeroFirstCol = true;
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(i=1; i<r;i++){
            if(matrix[i][0]==0){
                for(j=1;j<c;j++){
                    matrix[i][j]=0;
                }
            }
        }

        for(j=1; j<c;j++){
            if(matrix[0][j]==0){
                for(i=1;i<r;i++){
                    matrix[i][j]=0;
                }
            }
        }
                // Set the first row and first column to zero if needed
        if (zeroFirstRow) {
            for (i= 0; i < c; ++i) {
                matrix[0][i] = 0;
            }
        }

        if (zeroFirstCol) {
            for (j = 0; j < r; ++j) {
                matrix[j][0] = 0;
            }
        }

    }
};
