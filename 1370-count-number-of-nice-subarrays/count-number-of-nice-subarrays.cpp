class Solution {
public:
    int atm(vector<int>& nums,int k){
        int r=0,l=0,oc=0,mc=0;
        while(r<nums.size()){
            if(nums[r]%2==1)oc++;
            while(oc>k){
                if(nums[l]%2==1)oc--;
                l++;
            }
            mc+=(r-l+1);
            r++;
        }
        return mc;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atm(nums,k)-atm(nums,k-1);
    }
};