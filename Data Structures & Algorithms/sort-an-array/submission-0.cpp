class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() == 1){return nums;}
        map<int, int> hash;
        for (int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }
        int i = 0;
        for (auto& [key, value] : hash) {
            while(value > 0){
                nums[i++] = key;
                value--;
            }
        }
        return nums;
    }
};