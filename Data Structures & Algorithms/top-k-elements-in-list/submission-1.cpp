class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.size() == 1) return {nums[0]};
        vector<int> out;
        vector<int> countVec(2001);
        for (int i = 0; i < nums.size(); i++){
            int indexToUpdate = nums[i] + 1000;
            countVec[indexToUpdate]++;
        }
        for (int i = 0; i < k; i++){
            int currentHigh = -1;
            int numberToAdd = -1;
            for (int j = 0; j < 2001; j++){
                if (countVec[j] > currentHigh){
                    currentHigh = countVec[j];
                    numberToAdd = j - 1000;
                }
            }
            out.push_back(numberToAdd);
            countVec[numberToAdd + 1000] = -1;
        }
        return out;
    }
};
