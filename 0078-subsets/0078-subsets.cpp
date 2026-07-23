class Solution {
    void solve(vector<int>nums,vector<int>out,int index,vector<vector<int>>&ans){
        //base
        if(index>=nums.size()){
            ans.push_back(out);
            return;
        }
        //exclude
        solve(nums,out,index+1,ans);
        //inlude
        int el=nums[index];
        out.push_back(el);
        solve(nums,out,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>out;
        int index=0;
        solve(nums,out,index,ans);
        return ans;
    }
};