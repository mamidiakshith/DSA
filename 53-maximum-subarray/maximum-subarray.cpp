class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0,ms=nums[0];
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==0){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            if(s<nums[i]){
                s=nums[i];
            }
            if(s>ms){
                ms=s;
            }
        }
        return ms;
    }
};