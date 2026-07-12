class Solution {
public:
    int climbStairs(int n) {
        if(n==1||n==0)
            return 1;
            int a[n+1];
            for(int i=0;i<n+1;i++){
                a[i]=0;
            }
            a[0]=1;
            a[1]=1;
            for(int i=2;i<n+1;i++){
                a[i]=a[i-1]+a[i-2];
            }
            return a[n];
    }
};