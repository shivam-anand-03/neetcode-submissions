class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // Count frequency
        for (int num : nums) {
            freq[num]++;
        }

        // Buckets: index = frequency
        vector<vector<int>> bucket(nums.size() + 1);

        // Place each number in its frequency bucket
        for (auto &it : freq) {
            int num = it.first;
            int count = it.second;
            bucket[count].push_back(num);
        }

        vector<int> ans;

        // Traverse from highest frequency to lowest
        for (int i = nums.size(); i >= 1 && ans.size() < k; i--) {
            for (int num : bucket[i]) {
                ans.push_back(num);
                if (ans.size() == k)
                    break;
            }
        }

        return ans;
    }
};