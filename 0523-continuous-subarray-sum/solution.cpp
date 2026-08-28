class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        std::unordered_map<int, int> remainder_map;
        remainder_map[0] = -1;
        int running_sum = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            running_sum += nums[i];
            int remainder = running_sum % k;
            if (remainder_map.count(remainder))
            {
                if (i - remainder_map[remainder] >= 2)
                {
                    return true;
                }
            }
            else
            {
                remainder_map[remainder] = i;
            }
        }
        return false;
    }
};