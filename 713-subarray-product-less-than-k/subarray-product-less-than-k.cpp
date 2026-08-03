class Solution {
public:

    int mpp(vector<int>& nums, int k){
        if(k<=1)return 0;
        int l=0,r=0,p=1,c=0;
        while(r<nums.size()){
            p*= nums[r];
            while(p>=k){
                p/=nums[l];
                l++;
            }
            if(p < k ){
                c+= r-l+1;
            }
            r++;
        }
        return c;
    }
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       return mpp(nums,k);
    }
};