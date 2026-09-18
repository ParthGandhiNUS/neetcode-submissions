class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        // Vector of size 26 for 26 char and all initialised to 0
        vector<int> count (26, 0);
        for (int i = 0; i < s.size(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for (int i : count){
            if (i != 0) return false;
        }
        return true;
    }
};
