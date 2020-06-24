class Solution {
public:
    int numTrees(int n) {
        long long dp[n+1];
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i=2; i<=n; i++)
        {
            long long sum = 0;
            for(int j=1; j<=i; j++)
            {
                int left = j-1;
                int right = i-j;
                sum += dp[left]*dp[right];
            }
            dp[i] = sum;
        }
        return dp[n];
    }
};
