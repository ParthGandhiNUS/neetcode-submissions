class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> hash;
        int n = nums.size();
        vector<int> out;
        if (n == 1){return{nums[0]};}
        for (int i = 0; i < n; i++){
            if (hash.contains(nums[i])){
                hash[nums[i]]++;
            } else {
                hash[nums[i]] = 1;
            }
        }
        for (const auto& [key, value] : hash) {
            if (value > n/3){
                out.push_back(key);
            }
        }
        return out;
    }
};