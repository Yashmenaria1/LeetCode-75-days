class Solution {
public:
    const int MOD = 1e9+7;
    int numTilings(int n) {
        return solve(0, n, false);
    }
    long solve(int i, int n, bool previousGap) {
        if(i > n) return 0;                
        if(i == n) return !previousGap;     
        if(previousGap)                    
            return (solve(i+1, n, false) + solve(i+1, n, true)) % MOD;
        return (solve(i+1, n, false) + solve(i+2, n, false) + 2l*solve(i+2, n, true)) % MOD;
    }
};
