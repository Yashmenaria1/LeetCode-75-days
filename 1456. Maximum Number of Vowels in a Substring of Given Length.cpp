class Solution {
    public int maxVowels(String s, int k) {
        int n = s.length(), vow = 0, ans;

        for (int i = 0; i < k; i++) {
            if (isVowel(s.charAt(i)))
                vow++;
        }
        ans = vow;

        for (int i = 0; i < n - k; i++) {
            if (isVowel(s.charAt(i)))
                vow--;
            if (isVowel(s.charAt(i + k)))
                vow++;
            ans = Math.max(ans, vow);
        }

        return ans;
    }

    private boolean isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
}
