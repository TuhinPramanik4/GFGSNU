class Solution
{   
public:  
    void transpose(vector<vector<int>>& matrix, int n)
    { 
        vector<vector<int>> transposeMatrix(n, vector<int>(n, 0));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                transposeMatrix[j][i] = matrix[i][j];
            }
        }
        matrix = transposeMatrix;
    }
};