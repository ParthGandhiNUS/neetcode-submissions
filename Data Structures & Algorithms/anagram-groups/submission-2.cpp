class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Create the output array
        vector<vector<string>> out;
        int n = strs.size();
        // Base case to shortcircuit
        if (n == 1) return {{strs[0]}};
        // Here we have chosen to go with storing the sorted str[i], and corresponding vector of indices from strs
        unordered_map<string, vector<int>> hash;
        // iterate through strs while storing the indices
        for (int i = 0; i < n; i++){
            string currWord = strs[i];
            sort(currWord.begin(), currWord.end());
            hash[currWord].push_back(i);
        }

        //Go through the hashmap to formulate the output 2d array
        for (const auto& pair:hash){
            vector<string>currVect;
            for (int i = 0; i < pair.second.size(); i++){
                int currentIndex = pair.second[i];
                currVect.push_back(strs[currentIndex]);
            }
            out.push_back(currVect);
        }
        return out;
    }
};
