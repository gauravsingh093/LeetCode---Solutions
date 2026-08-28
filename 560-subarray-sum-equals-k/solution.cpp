class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        std::unordered_map<int, int> prefixCounts;
        prefixCounts[0] =1;
        int currentSum = 0;
        int count =0;
        for (int num : nums){
            currentSum += num;

            if (prefixCounts.find(currentSum - k) != prefixCounts.end()){
                count += prefixCounts[currentSum - k];
            }
            prefixCounts[currentSum]++;
        }
        return count;
    }
};