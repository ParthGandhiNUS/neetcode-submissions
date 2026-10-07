class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        string out;
        while( i < word1.size() && j < word2.size()){
            out += word1[i++];
            out += word2[j++];
        }
        out += word1.substr(i);
        out += word2.substr(i);
        return out;
    }
};