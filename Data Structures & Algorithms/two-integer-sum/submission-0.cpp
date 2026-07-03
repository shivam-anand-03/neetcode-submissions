class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < (int)nums.size(); i++) {
            int diffrence = target - nums[i];

            if (mp.find(diffrence) != mp.end()) {
                return {mp[diffrence], i};
            }
            mp[nums[i]] = i;
        }

        return {} ;
    }
};