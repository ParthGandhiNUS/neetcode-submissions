class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> hash;
        unordered_map<char, int> hashcopy;
        int n1 = s1.size(), n2 = s2.size();
        for (int i = 0; i < n1; i++){
            hash[s1[i]]++;
        }

        for (int i = 0; i < (n2 - n1 + 1); i++){
            if (hash.contains(s2[i])){
                //Iterate through the elements in 
                for (int j = 0; j < s1.size(); j++){
                    hashcopy[s2[i+j]]++;
                }
                if (hashcopy == hash){
                    return true;
                } else {
                    hashcopy.clear();
                }
            }
        }
        return false;
    }
};
