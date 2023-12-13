class Solution {
public String reverseVowels(String s) {
        String word = s;
        int start = 0;
        int end = s.length() - 1;
        String vowels = "aeiouAEIOU";
        
        while (start < end) {
            while (start < end && vowels.find(word[start]) == string::npos) {
                start++;
            }
            
            while (start < end && vowels.find(word[end]) == string::npos) {
                end--;
            }
            
            swap(word[start], word[end]);
            
            start++;
            end--;
        }
        
        return word;
    }
};
