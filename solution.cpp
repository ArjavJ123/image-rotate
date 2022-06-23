class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
            int t, n = matrix.size();
            for(int i=0; i<n; i++) {
                for(int j = i+1 ; j<n ; j++) {
                    t = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = t;
                }
            }
            
            for(int i=0; i<n; i++) {
                for(int j =0 ; j<n/2 ; j++) {
                    t = matrix[i][j];
                    matrix[i][j] = matrix[i][n-1-j];
                    matrix[i][n-1-j] = t;
                }
            }
        }
};
