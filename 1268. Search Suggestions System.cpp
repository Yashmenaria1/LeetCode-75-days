class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>> result;
        for (int i = 0; i < searchWord.size(); ++i) {
            auto start = lower_bound(products.begin(), products.end(), searchWord.substr(0, i+1));
            auto end = lower_bound(start, min(start+3, products.end()), searchWord.substr(0, i) + (char)(searchWord[i]+1));
            result.push_back(vector<string>(start, end));
        }
        return result;		         
    }
};
