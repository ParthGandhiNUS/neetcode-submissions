class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first = strs[0];
        int n = strs.size();
        string out; // Initially is ""
        for (int i = 0; i < first.size(); i++){
            for (int j = 0 ; j < n; j++){
                if (strs[j][i] != first[i]){
                    return out;
                }
            }
            out.push_back(first[i]);
        }
        return out;
    }
};