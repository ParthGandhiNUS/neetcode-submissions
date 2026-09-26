class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n1 = 0, n2 = 0, n3 = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                n1++;
            }
            if (nums[i] == 1){
                n2++;
            }
            if (nums[i] == 2){
                n3++;
            }
        }
        for (int i = 0; i < nums.size(); i++){
            if (n1 != 0){
                nums[i] = 0;
                n1--;
            } else if (n2 != 0){
                nums[i] = 1;
                n2--;
            } else {
                nums[i] = 2;
                n3--;
            }
        }
    }
};