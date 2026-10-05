class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0; i < s.size() - 1;i++){
            for (int j = i+1; j < s.size(); j++){
                swap(s[i],s[j]);
            }
        }
    }
};