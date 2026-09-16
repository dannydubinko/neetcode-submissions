class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;

        while (l <= r) {
            int middle = (r - l) / 2 + l;

            if (nums[middle] > target) {
                r = middle - 1;
            } else if (nums[middle] < target) {
                l = middle + 1;
            } else {
                return middle;
            }
        }
        return -1;
    }
};
