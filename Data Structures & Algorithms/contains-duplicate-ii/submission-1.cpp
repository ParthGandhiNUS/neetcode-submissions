class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int p1= 0, p2 = 0;
        for (int i = 0; i < nums.size() - 1; i++){
            p1 = i;
            p2 = i+1;
            while((p2 < nums.size()) && (p2-p1 <= k)){
                if (nums[p1] == nums[p2]){
                    return true;
                }
                p2++;
            }
        }
        return false;
    }
};