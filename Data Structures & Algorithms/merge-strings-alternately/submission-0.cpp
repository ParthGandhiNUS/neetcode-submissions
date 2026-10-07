class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size();
        int n = n1 > n2 ? n2 : n1;
        string substring = n1 > n2 ? word1.substr(n) : word2.substr(n);
        string out;
        for(int i = 0; i < n; i++){
            out+=word1[i];
            out+=word2[i];
        }
        return out+=substring;
    }
};