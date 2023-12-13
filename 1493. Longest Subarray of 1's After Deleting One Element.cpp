class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0;
        for (int i = 0, j = 0, sum = 0; j < nums.size(); ++j) {
            sum += nums[j];
            while (i < j && sum < j - i)  {
                sum -= nums[i++];
            }
            ans = max(ans, j - i);
        }
        return ans;
    }
};
