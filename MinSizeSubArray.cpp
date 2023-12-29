class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = 0;
        int bestLen = INT_MAX/2;
        int sum = 0;
        int n = nums.size();
        int x = 0;

        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            len++;

            while (sum >= target) {
                bestLen = std::min(bestLen, len);
                sum -= nums[x++];
                len--;
            }
        }

        return (bestLen == INT_MAX/2) ? 0 : bestLen;
    }
};
