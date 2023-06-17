class Solution {
public:
    void recur(int i, vector<int>& candidates, int target, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        
        int n = candidates.size();
        for (int j = i; j < n; j++) {
            if (j > i && candidates[j] == candidates[j - 1]) {
                continue; // Skip duplicates
            }
            
            int num = candidates[j];
            if (num > target) {
                break; // No need to continue, as the remaining elements will be greater than target
            }
            
            current.push_back(num);
            recur(j + 1, candidates, target - num, current, result);
            current.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        
        sort(candidates.begin(), candidates.end());
        recur(0, candidates, target, current, result);
        
        return result;
    }
};
