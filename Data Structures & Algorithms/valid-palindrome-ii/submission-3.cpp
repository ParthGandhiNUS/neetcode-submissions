class Solution {
public:
    bool isValid(string s, int l, int r){
        while (l < r){
            if (s[l] != s[r]){
                return false;
            }
            l++;r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j){
            if (s[i]!=s[j]){
                // Check the substring
                bool out1 = isValid(s, i+1, j);
                bool out2 = isValid(s, i, j-1);
                return (out1 || out2);
            }
            i++; j--;
        }
        return true;
    }
};