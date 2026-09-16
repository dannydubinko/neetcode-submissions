class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> postfix(nums.size());
        vector<int> res;

        int sumL = 1;
        int sumR = 1;

        int r = nums.size() - 1;

        for (int l = 0; l < nums.size(); l++) {
            sumL *= nums[l];
            sumR *= nums[r];

            prefix.push_back(sumL);
            postfix[r] = sumR;

            r--;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                res.push_back(1 * postfix[i + 1]);
            } else if (i == nums.size() - 1) {
                res.push_back(1 * prefix[i - 1]);
            }
            else {
                res.push_back(prefix[i - 1] * postfix[i + 1]);
            }
        }

        return res;
    }
};
