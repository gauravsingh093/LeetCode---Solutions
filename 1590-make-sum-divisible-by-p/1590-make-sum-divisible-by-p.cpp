class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }

        int targetRem = totalSum % p;
        if (targetRem == 0) return 0;

        unordered_map<int, int> lastSeen;
        lastSeen[0] = -1;

        long long currentPrefixSum = 0;
        int minLen = nums.size();

        for (int i = 0; i < nums.size(); ++i) {
            currentPrefixSum += nums[i];
            int currentRem = currentPrefixSum % p;

            int neededRem = (currentRem - targetRem + p) % p;
            if (lastSeen.count(neededRem)) {
                minLen = min(minLen, i - lastSeen[neededRem]);
            }

            lastSeen[currentRem] = i;
        }

        return minLen == nums.size() ? -1 : minLen;
    }
};