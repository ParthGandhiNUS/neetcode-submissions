class Solution {
public:
    bool isValid(string s) {
        vector<char> check;
        int curr = -1;
        unordered_map <char, char> hashmap = {{'(', ')'},{'[', ']'},{'{', '}'}};
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
                check.push_back(s[i]);
                curr += 1;
            } 
            if (s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if (curr<0 || hashmap[check[curr]] != s[i]){
                    return false;
                } else {
                    check.pop_back();
                    curr--;
                }
            }
        }
        if (curr != -1){return false;}
        return true;
    }
};
