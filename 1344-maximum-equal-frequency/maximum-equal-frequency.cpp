class Solution {
public:
    int maxEqualFreq(vector<int>& nums) {
        unordered_map<int, int> count;
        unordered_map<int, int> freq;

        int ans=0;
        int maxFreq = 0;

        for (int i = 0; i < nums.size(); i++) {

            int x = nums[i];
            if (count[x] > 0)
                freq[count[x]]--;

            count[x]++;

            freq[count[x]]++;

            maxFreq = max(maxFreq, count[x]);

            int len = i + 1;
            if (maxFreq == 1) {
                ans = len;
            }
            else if (freq[1] == 1 && freq[maxFreq] * maxFreq + 1 == len) {
                ans = len;
            } else if (freq[maxFreq] == 1 &&
                       freq[maxFreq - 1] * (maxFreq - 1) + maxFreq == len) {
                ans = len;
            }
        }

        return ans;
    }
};