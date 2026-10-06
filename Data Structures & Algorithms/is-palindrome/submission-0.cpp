class Solution {
public:
    bool isPalindrome(string s) {
        string newS;
        for (int i = 0; i < s.size(); i++){
            if (isalnum(s[i])){
                newS += tolower(s[i]);
            }
        }
        int n = newS.size();
        if (n == 0 || n == 1){return true;}
        for (int i = 0; i < n/2; i++){
            if (newS[i] != newS[n-1-i]){
                return false;
            }
        }
        return true;
    }
};
