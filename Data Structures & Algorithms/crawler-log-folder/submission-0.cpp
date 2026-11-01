class Solution {
public:
    int minOperations(vector<string>& logs) {
        int out = 0;
        for (int i = 0; i < logs.size(); i++){
            if (logs[i] == "../"){
                if (out != 0){
                    out -= 1;
                } else {
                    out = out;
                }
            } else if (logs[i] == "./"){
                out == out;
            } else {
                out += 1;
            }
        }
        return out;
    }
};