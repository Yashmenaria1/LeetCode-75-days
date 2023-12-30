class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                count++;
                dfs(isConnected, i, visited);
            }
        }

        return count;
    }

private:
    void dfs(vector<vector<int>>& isConnected, int i, vector<bool>& visited) {
        for (int j = 0; j < isConnected[i].size(); j++) {
            if (!visited[j] && isConnected[i][j] != 0) {
                visited[j] = true;
                dfs(isConnected, j, visited);
            }
        }
    }
};
