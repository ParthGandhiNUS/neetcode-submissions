class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> records;
        int out = 0;
        for (int i = 0; i < operations.size(); i++){
            string curr = operations[i];
            int n = records.size();
            if (curr == "+"){
                records.push_back(records[n-1] + records[n-2]);
                out += records[n-1] + records[n-2];
            } else if (curr == "D"){
                records.push_back(2*records[n-1]);
                out += 2*records[n-1];
            } else if (curr == "C"){
                out -= records[n-1];
                records.pop_back();
            } else {
                records.push_back(stoi(curr));
                out += stoi(curr);
            }
        }
        return out;
    }
};