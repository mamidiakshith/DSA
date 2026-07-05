class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        int i=0;
        while(i<nums.size()){
            if(i>0 && nums[i]==nums[i-1]){
                i++;
                continue;
            }
            int j=i+1;
            while(j<nums.size()){
                if(j> i+1 && nums[j]==nums[j-1]){
                    j++;
                    continue;
                }
                int k=j+1;
                int l=nums.size()-1;
                while(k<l){
                    long long sum=1LL*nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum<target){
                        k++;
                    }
                    else if(sum>target){
                        l--;
                    }
                    else{
                        vector<int>res={nums[i],nums[j],nums[k],nums[l]};
                        v.push_back(res);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1])k++;
                        while(k<l && nums[l]==nums[l+1])l--;
                    }
                }
                j++;
            }
            i++;
        }
        return v;
    }
};