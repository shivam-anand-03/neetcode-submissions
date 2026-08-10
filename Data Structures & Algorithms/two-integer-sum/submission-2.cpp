class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
        {

            int diffrence = target - nums[i];

            if (map.find(diffrence) != map.end())
            {
                return { map[diffrence] , i};
            }

            map[nums[i]] = i;
        }

        return {};
    }
};
