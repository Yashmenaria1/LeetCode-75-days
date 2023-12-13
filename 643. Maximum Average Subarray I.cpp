class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long sum = 0;
        for (int i = 0; i < k; i++) sum += nums[i];
        long maxi = sum;
        
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];
            maxi = max(maxi, sum);
        }
        
        return maxi / 1.0 / k;
    }
};
