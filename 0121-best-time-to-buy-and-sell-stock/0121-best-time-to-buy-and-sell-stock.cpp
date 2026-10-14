class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1;
        int p=0;
        while(r<prices.size()){
            int cp=prices[r]-prices[l];
            if(prices[l]<prices[r])
            p=max(cp,p);
            else
            l=r;
            r++;
        }
        return p;
    }
};