class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int r=0,l=0,s=0;
        int ml=INT_MAX;
        while(r<nums.size()){
            s+=nums[r];
            while(s>=target){
                ml=min(ml,r-l+1);
                s-=nums[l];
                l++;
            }
            r++;
        }
        return ml==INT_MAX?0:ml;
    }
};