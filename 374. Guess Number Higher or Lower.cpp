class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n, mid;
        while(low <= high){
            mid = (high - low) / 2 + low;
            if(guess(mid) == 0) return mid;
            else if( guess(mid) == 1) low = mid + 1;
            else high = mid - 1; 
        }
        return -1;
    }
};
