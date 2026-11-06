class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char, int> hash;
        int largestLength = 0, prevCut = 0;
        for (int i = 0; i < s.size(); i++){
            char curr = s[i];
            if (hash.contains(curr)){
                int prevIndex = hash[curr];
                for (int j = prevCut; j <= prevIndex; j++){
                    hash.erase(s[j]);
                }
                prevCut = prevIndex + 1;
            } 
            hash[curr] = i;
            int currLength = i - prevCut + 1;
            largestLength = max(currLength, largestLength);
        }
        return largestLength;
    }
};
