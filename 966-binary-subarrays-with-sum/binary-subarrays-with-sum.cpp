class Solution {
public:
    int mark(vector<int>& nums, int goal){
        if(goal < 0) return 0;
        int r=0,l=0,s=0,c=0;
        while(r<nums.size()){
            s+=nums[r];
            while(s>goal){
                s-=nums[l];
                l++;
            }
            c+=(r-l+1);
            r++;
        }
        return c;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return mark(nums,goal)-mark(nums,goal-1);
    }
};