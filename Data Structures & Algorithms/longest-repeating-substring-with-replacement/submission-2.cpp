class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0;
        int n = s.size();
        unordered_map <char, int> hash;
        int longest = 0;
        int mostFrequent = 0;

        //Base Case
        if (k == n){return n;}
        
        //Traversal through the array
        while (r < n){
            int currSize = r - l + 1;
            hash[s[r]]++;
            mostFrequent = max(mostFrequent, hash[s[r]]);
            while (currSize - mostFrequent > k){
                hash[s[l]]--;
                l++;
                // mostFrequent = 0;
                // for (char ch = 'A'; ch <= 'Z'; ch++){
                //     mostFrequent = max(mostFrequent, hash[ch]);
                // }
                currSize = r - l + 1;
            }
            r++;
            longest = max(longest, currSize);
        }
        return longest;
    }
};
