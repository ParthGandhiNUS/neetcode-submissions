class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hash;
        int n1 = s.size(), n2 = t.size();
        if (n1!=n2) return false;
        for (int i = 0; i < n1; i++){
            hash[s[i]]++;
            hash[t[i]]--;
        }
        for (int i = 0; i < n1; i++){
            if (hash[s[i]] != 0) return false;
        }
        return true;
    }
};
