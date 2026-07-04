class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int n = nums.size();
        int longest = 0;

        for (int i = 0; i < n; i++) {

            // Start only if nums[i] is the beginning of a sequence
            if (st.find(nums[i] - 1) == st.end()) {

                int length = 1;

                while (st.find(nums[i] + length) != st.end()) {
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};