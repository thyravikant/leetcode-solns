class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int ans=r;
        while(l<=r){
            int k=(l+r)/2;
            int long hr=0;
            for(int p:piles){
                hr+=(p+k-1)/k;
            }
            if(hr<=h){
                ans=k;
                r=k-1;
            }
            else
            l=k+1;
        }
    
    return ans;
    }
};