class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int N = matrix.size();
        
        //find transpose
        for(int i = 0; i<N; i++) {
            for(int j = i; j<N; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        //flip horizontally - For clock wise rotation
        for(int i = 0; i<N; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
        /*
        //flip vertically - For anticlock wise rotation
        for(int col = 0; col<N; col++) {
            int row = 0;
            int mid = n/2;
            while(row < mid) {
                swap(matrix[row][col], matrix[n-row-1][col]);
                row++;
            }
        }
        */
    }
};