class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> solution;

        for (int i = 0; i < nums.size(); i++) {
            int search = target - nums[i];

            if (m.count(search)) {
                return {m[search], i};
            }

            m[nums[i]] = i;
        }
        return solution;
    }
};
