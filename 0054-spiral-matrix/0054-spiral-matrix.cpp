class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int cnt=0;
        int t=r*c;
        vector<int> ans;
        int top=0;
        int b=r-1;
        int l=0;
        int right=c-1;
        while(cnt<t){
            for(int i=l;i<=right && cnt<t;i++){
                ans.push_back(matrix[top][i]);
                cnt++;
            }
            top++;
            for(int i=top;i<=b && cnt<t;i++){
                ans.push_back(matrix[i][right]);
                cnt++;
            }
            right--;
            for(int i=right;i>=l && cnt<t;i--){
                ans.push_back(matrix[b][i]);
                cnt++;
            }
            b--;
            for(int i=b;i>=top && cnt<t;i--){
                ans.push_back(matrix[i][l]);
                cnt++;
            }
            l++;
        }
        return ans;
    }
};