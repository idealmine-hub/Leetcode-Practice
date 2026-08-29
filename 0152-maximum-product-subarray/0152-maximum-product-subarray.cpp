class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int pre = 1, suf = 1;
        for (int i = 0; i < nums.size(); i++) {
            pre = pre * nums[i];
            suf = suf * nums[nums.size() - 1 - i];
            maxi = max(maxi, pre);
            maxi = max(maxi, suf);
            if (pre == 0)
                pre = 1;
            if (suf == 0)
                suf = 1;
        }
        return maxi;
    }
};