class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        bool flag=false;
        while(l<=h){
            int mid= (l+h)/2;
            if(nums[mid]==target){
                flag=true;
                break;
            }
            if(nums[l]==nums[mid] && nums[mid]==nums[h]){
                l++;
                h--;
            }
            else if(nums[mid]>=nums[l]){
                if(target>=nums[l] && target< nums[mid]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(nums[mid]<target && target<=nums[h]){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return flag;
    }
};