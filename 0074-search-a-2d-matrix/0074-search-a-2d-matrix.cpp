class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int s=0;
        int e=r*c-1;
        int m=s+(e-s)/2;
        while(s<=e){
            int el=matrix[m/c][m%c];
            if(el==target)
            return true;
            if(el<target)
            s=m+1;
            else
            e=m-1;
            m=s+(e-s)/2;
        }
        return false;
    }
};