class Solution {
public:
    bool isValid(string s, int l, int r){
        while (l < r){
            if (s[l++] != s[r--]){
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j){
            if (s[i]!=s[j]){
                return (isValid(s, i+1, j) || isValid(s, i, j-1));
            }
            i++; j--;
        }
        return true;
    }
};