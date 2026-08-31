class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty())return 0;
        int maxm=nums[0];
        int minm=nums[0];
        int result=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                maxm=maxm^minm;
                minm=minm^maxm;
                maxm=minm^maxm;
            }
            maxm=max(nums[i],maxm*nums[i]);
            minm=min(nums[i],minm*nums[i]);
            result=max(result,maxm);
        }
        return result;
    }
};