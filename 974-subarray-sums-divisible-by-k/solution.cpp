class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        std::unordered_map<int, int> remainder_count;
        remainder_count[0] = 1;
        int current_sum = 0;
        int count = 0;
        for (int num : nums) {
            current_sum += num;
            int remainder = ((current_sum % k) +k) % k;
            if (remainder_count.find(remainder) != remainder_count.end()) 
            {
                count += remainder_count[remainder];
            }
            remainder_count[remainder]++;
        }
        return count;
    }
};