class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int current_count = 0;
        int n = nums.size();

        for (int j = 0; j < n; j++) {
            if (nums[j] == 1) {
                current_count++;
            } else {
                max_count = max(max_count, current_count);
                current_count = 0;
            }
        }

        return max(max_count, current_count);
    }
};