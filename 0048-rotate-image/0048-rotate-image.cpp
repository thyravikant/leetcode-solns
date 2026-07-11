class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> t(matrix.size(), vector<int>(matrix[0].size()));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                t[j][i]=matrix[i][j];
        }   }
        matrix=t;
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};