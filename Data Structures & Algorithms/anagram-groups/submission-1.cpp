class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> out;
        int n = strs.size();
        if (n == 1) return {{strs[0]}};
        unordered_map<string, vector<int>> hash;
        for (int i = 0; i < n; i++){
            string currWord = strs[i];
            sort(currWord.begin(), currWord.end());
            hash[currWord].push_back(i);
        }
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
