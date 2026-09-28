class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string out;
        for (int i = 0; i < n; i++){
            int stringSize = strs[i].size();
            out += to_string(stringSize);
            out += "#";
            out += strs[i];
        }
        return out;
    }

    vector<string> decode(string s) {
        vector <string> output;
        int i = 0;
        while(i < s.size()) {
            string wordSize;
            while (s[i] != '#'){
                wordSize += s[i++];
            }
            int stringSize = stoi(wordSize);
            string currentWord;
            i++;
            while (stringSize > 0){
                currentWord += s[i];
                i++;
                stringSize--;
            }
            output.push_back(currentWord);
        }
        return output;
    }
};
