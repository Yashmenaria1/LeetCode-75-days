class Solution{
public:
    int minDistance(string word1, string word2) {
        int m = word1.length(), n = word2.length();   
        vector<int> dp(n + 1);
    
        for (int j = 1; j <= n; j++) {
            dp[j] = j;
        }   
        for (int i = 0; i < m; i++) {
            int topLeft = dp[0];
            dp[0] = i + 1;
        
            for (int j = 0; j < n; j++) {
                int tmp = dp[j + 1];
                if (word1[i] == word2[j]) {
                    dp[j + 1] = topLeft;
                } 
                else {
                    dp[j + 1] = min(topLeft, min(dp[j], dp[j + 1])) + 1;
                }
                topLeft = tmp;
            }
        }
    
        return dp[n];
    }
};
