class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i = 0, j = people.size() - 1;
        int count = 0;
        int n = 0;
        while (i < j){
            if (people[j] + people[i] > limit){
                j--;
                n += 1;
            } else {
                j--; i++;
                n += 2;
            }
            count++;
        }
        if (n < people.size()){count += 1;}
        return count;
    }
};