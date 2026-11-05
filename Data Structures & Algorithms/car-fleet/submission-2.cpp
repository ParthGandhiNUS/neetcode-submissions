class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector <pair<int, int>> newVect;
        for (int i = 0; i < position.size(); i++){
            newVect.emplace_back(position[i], speed[i]);
        }

        sort(newVect.begin(), newVect.end(), greater<pair<int, int>>());
        vector <float> newStack;
        for (auto& vect: newVect){
            float jumps = float(target - vect.first)/vect.second;
            newStack.push_back(jumps);
            int n = newStack.size();
            if ((n >= 2) && newStack[n-1] <= newStack[n-2]){
                newStack.pop_back();
            }
        }
        return newStack.size();
    }
};
