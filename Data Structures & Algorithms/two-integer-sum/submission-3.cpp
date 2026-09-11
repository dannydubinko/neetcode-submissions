class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> solution;

        for (int i = 0; i < nums.size(); i++) {
            int search = target - nums[i];

            if (m.count(search)) {
                solution.push_back(m[search]);
                solution.push_back(i);
                return solution;
            }

            m[nums[i]] = i;
        }
        return solution;
    }
};
