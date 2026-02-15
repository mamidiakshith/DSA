class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int mini=i;
            for(int j=i+1;j<n;j++){
                if(nums[mini]>nums[j]){
                    mini=j;
                }
            }
            swap(nums[mini],nums[i]);
        }
    }
};