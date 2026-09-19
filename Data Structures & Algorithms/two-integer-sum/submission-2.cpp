class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> hashmap;
        for (int i = 0; i < n; i++){
            int check = target - nums[i];
            if (hashmap.contains(check)){
                return {hashmap[check], i};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};
