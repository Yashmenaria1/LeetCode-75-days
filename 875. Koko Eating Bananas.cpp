class Solution {
public:
        int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = 1000000000;
        while (low < high) {
            int mid = (low + high) / 2, total = 0;
            for (int p : piles)
                total += (p + mid - 1) / mid;
            if (total > h)
                low = mid + 1;
            else
                high = mid;
        }
        return low;
    }
};
