class Solution {
public:
    int lengthOfLongestSubstring(string s) {//sliding window
        unordered_set<char> seen;
        int l,ans=0;
        for(int r=0;r<s.size();r++){
            while(seen.find(s[r])!=seen.end()){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            ans=max(ans,r-l+1);
        }
        return ans;

    }
};